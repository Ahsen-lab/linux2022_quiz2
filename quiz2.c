#include <stdint.h>
#include <stdio.h>
#include "test.h"

int main()
{
    uint32_t a = UINT32_MAX, b = UINT32_MAX;

    /* test 1. */
    printf("Test 1.\n");
    printf("a = %u, b = %u\n", a, b);
    printf("(a + b) / 2 = %u => overflow\n", (a + b) / 2);
    printf("(a >> 1) + (b >> 1) + (a & b & 1) = %u\n", average1(a, b));
    printf("(a & b) + ((a ^ b) >> 1) = %u\n\n", average2(a, b));

    /* test 2. */
    a = 0, b = UINT32_MAX;
    printf("Test 2.\n");
    printf("a = %u, b = %u\n", a, b);
    printf("max(a, b) = %u\n", max(a, b));
    a = UINT32_MAX, b = 0;
    printf("a = %u, b = %u\n", a, b);
    printf("max(a, b) = %u\n\n", max(a, b));

    /* test 3. */
    uint64_t u = 78432992 * 4, v = 78432992;
    printf("Test 3.\n");
    printf("u = %lu, v = %lu\n", u, v);
    printf("gcd64(u, v) = %lu\n", gcd64(u, v));
    return 0;
}
