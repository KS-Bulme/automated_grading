# Autograding Templates

This repository contains templates for performing automated grading of
Python, C and C++ code. The required source code and the associated autotests
are in the `c`, `cpp` and `py` directories. The definitions for github actions
to run the tests and perform automated grading reside in `.github`.

## Task
The task is to write a program
that implements the function `sum_to(num)` which adds up all integers
between 0 and a user-defined upper limit `num`,
i.e. `1 + 2 + 3 + ... + num`. The upper limit has to be integral and must
be included in the sum.

## Test Cases
For the task at hand, one could use `25` as a common case for the
upper limit. A good addition would be `26` to have at least one common
case of an even number for the upper limit. The edge cases for the problem at
hand usually include `0` (the smallest unsigned integer) and
`4294967295` (the largest 32 bit unsigned integer).
Expected results for these are `325`, `351`, `0` and
`9223372034707292160`.
In addition it would be good to also add, for example, `500000000` as
input (expected result `125000000250000000`) as `4294967295` does
not terminate at all when students fall for a common programming mistake.

