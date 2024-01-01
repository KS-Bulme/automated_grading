cmake_minimum_required(VERSION 3.18)
cmake_policy(SET CMP0048 NEW)
project(sum_to VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
include(CTest)
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.5.1 # or a later release
)
FetchContent_MakeAvailable(Catch2)
add_executable(run_tests sum_to.cpp sum_to_test.cpp)
target_link_libraries(run_tests PRIVATE Catch2::Catch2WithMain)
add_test(NAME sum_to_test COMMAND run_tests)
