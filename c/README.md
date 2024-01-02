To compile this example, Criterion has to be installed.

```shell
sudo apt install libcriterion-dev
```

Compile this example via

```shell
clang sum_to.c sum_to_test.c -o run_tests -l criterion
```
Execute the tests via

```shell
./run_tests
```

Experiment with the test-runner provided by Criterion via

```shell
./run_tests --help
./run_tests -l  # list all available tests
./run_tests --filter sum_to/fast_test
```

