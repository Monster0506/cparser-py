import pytest
from pathlib import Path

# Define the path to the tests directory relative to this file
TESTS_DIR = Path(__file__).parent.parent / "tests"


def pytest_generate_tests(metafunc):
    """
    Dynamically generate tests for every .c file in the tests directory.
    """
    if "c_file" in metafunc.fixturenames:
        c_files = sorted(list(TESTS_DIR.glob("*.c")))
        if not c_files:
            raise RuntimeError(f"No .c files found in {TESTS_DIR}")

        # Create a list of (id, path) tuples for better test names
        params = [str(f) for f in c_files]
        ids = [f.name for f in c_files]

        metafunc.parametrize("c_file", params, ids=ids)


@pytest.fixture
def parser_backend():
    from cparser.core import parse_file

    return parse_file
