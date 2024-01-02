#include <stdint.h>
#include <criterion/criterion.h>
#include <criterion/new/assert.h>

uint64_t sum_to(uint32_t n);  // usually in header file

Test(sum_to, fast_test) {
  cr_assert(eq(u64, sum_to(0), 0), "Sum of 0 is 0.");
  cr_assert(eq(u64, sum_to(25), 325), "Sum of 1..25 is 325.");
  cr_assert(eq(u64, sum_to(26), 351), "Sum of 1..26 is 351.");
  cr_assert(eq(u64, sum_to(500000000), 125000000250000000),
    "This function must work for large unsigned integers.");
}

Test(sum_to, slow_test) {
  cr_assert(eq(u64, sum_to(UINT32_MAX), 9223372034707292160),
    "The function must work for the largest unsigned integer.");
}
