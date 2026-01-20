import pytest
from pathlib import Path


def test_parse_c_file(c_file, parser_backend):
    """
    Test that a C file can be parsed successfully.
    """
    try:
        ast = parser_backend(c_file)
        assert ast is not None
        # In the future, we can add more specific assertions here
        # depending on the file name or content headers
    except NotImplementedError:
        pytest.fail("Parser not implemented yet")
    except Exception as e:
        with open("last_error.txt", "w") as f:
            f.write(str(e))
        pytest.fail(f"Failed to parse {Path(c_file).name}: {e}")
