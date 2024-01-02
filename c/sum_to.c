#include <stdint.h>
// Return the sum of all values from 1 to n.
uint64_t sum_to(uint32_t n) {
    return (uint64_t) ((n / 2.0 * n) + (n / 2.0));
}
