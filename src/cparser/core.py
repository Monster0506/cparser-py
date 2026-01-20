from lark import Lark
from pathlib import Path

# Load grammar relative to this file
GRAMMAR_PATH = Path(__file__).parent / "grammar.lark"

_parser = None


def get_parser():
    global _parser
    if _parser is None:
        with open(GRAMMAR_PATH, "r") as f:
            grammar = f.read()
        _parser = Lark(
            grammar, start="translation_unit", parser="earley", propagate_positions=True
        )
    return _parser


def parse_file(filepath):
    """
    Parse a C file using the Lark grammar.
    """
    parser = get_parser()
    with open(filepath, "r") as f:
        code = f.read()

    # Preprocessing hack:
    # Lark's C_COMMENT and C++_COMMENT usually handle comments,
    # but basic #include or #define might choke if we don't ignore them or handle them.
    # For now, let's treat '#' lines as comments to valid syntax if they are just preprocessor directives
    # that we don't fully support yet, OR we rely on the user to have preprocessed files.
    # Given the task is to build a parser for *tests*, which likely contain Includes,
    # parsing #include <stdio.h> as standard C syntax is actually NOT valid in standard grammar
    # (it is preprocessor).
    # We will assume for this step that we want to parse the *Code*.
    # A simple hack for headers is to remove lines starting with #.

    # Simple preprocessor stripper
    lines = code.splitlines()
    filtered_lines = []
    in_preprocessor = False

    for line in lines:
        stripped = line.strip()
        if in_preprocessor:
            if not stripped.endswith("\\"):
                in_preprocessor = False
            continue

        if stripped.startswith("#"):
            if stripped.endswith("\\"):
                in_preprocessor = True
            continue

        filtered_lines.append(line)

    clean_code = "\n".join(filtered_lines)

    # Handle C digraphs and trigraphs
    # <% -> {
    # %> -> }
    # <: -> [
    # :> -> ]
    # ??= -> #
    # ??/ -> \
    # ??' -> ^
    # ??( -> [
    # ??) -> ]
    # ??! -> |
    # ??< -> {
    # ??> -> }
    # ??- -> ~
    replacements = {
        "<%": "{",
        "%>": "}",
        "<:": "[",
        ":>": "]",
        "??=": "#",
        "??/": "\\",
        "??'": "^",
        "??(": "[",
        "??)": "]",
        "??!": "|",
        "??<": "{",
        "??>": "}",
        "??-": "~",
    }
    for old, new in replacements.items():
        clean_code = clean_code.replace(old, new)

    try:
        tree = parser.parse(clean_code)
        return tree
    except Exception as e:
        # Re-raise with file context could be better, but for now just let it bubble
        # or we could attempt to parse the raw code if the strip failed logic.
        raise e
