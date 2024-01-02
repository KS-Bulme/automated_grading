Compile this example via

```shell
mkdir build && cd build
cmake ..
make -j8  # use 8 processor cores when compiling
```

Execute the tests via

```shell
./run_tests
```

Experiment with the test-runner provided by Catch2 via

```shell
./run_tests --help
./run_tests --list-tests  # list all available tests
./run_tests [sum_to]  # or ./run_tests "sum_to must calculate correctly"
./run_tests [sum_to] --section "corner cases"
```

