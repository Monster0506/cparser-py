# cparser

A robust, pure-Python C99 parser built on [Lark](https://github.com/lark-parser/lark).

`cparser` provides a complete AST for C code, handling real-world complexities like preprocessor directives, GCC attributes, and C11 extensions.

## Features

- **Standard Compliance**: Full C99 grammar support.
- **Modern Extensions**:
  - **C11**: `_Atomic`, `_Static_assert`, `_Generic`, `_Alignas`.
  - **GCC**: `__attribute__`, Statement Expressions `({ ... })`.
  - **Digraphs/Trigraphs**: Automatic handling of `<%`, `%>`, `??=`, etc.
- **Robust Preprocessing**: Integrated handling for macro definitions and inclusions.
- **Batteries Included**: Verified against 200+ comprehensive test input files.

## Installation

Manage dependencies easily with `uv`:

```bash
uv sync
```

## Usage

Parsing a C file is straightforward:

```python
from pathlib import Path
from cparser.core import parse_file

ast = parse_file(Path("tests/0000_hello_world.c"))
print(ast.pretty())
```

### Running Tests

The project includes a comprehensive test suite. Run it with:

```bash
uv run pytest
```

## License

MIT
