To compile this example, Criterion has to be installed.

```shell
sudo apt install python3-pytest
```

Execute the tests via

```shell
python -m pytest
```

Experiment with the test-runner provided by pytest via

```shell
python -m pytest --help  # get help
python -m pytest --collect-only  # list all available tests
# ignore tests with `slow` in their name
python -m pytest -k "not slow"
```

