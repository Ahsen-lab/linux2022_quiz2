#include <stdio.h>
#include <stdint.h>
#include "test.h"

int main()
{
    uint32_t a = UINT32_MAX, b = UINT32_MAX;

    printf("Test 1.\n");
    printf("a = %u, b = %u\n", a, b);
    printf("(a + b) / 2 = %u => overflow\n", (a + b) / 2);
    printf("(a >> 1) + (b >> 1) + (a & b & 1) = %u\n", average1(a, b));
    printf("(a & b) + ((a ^ b) >> 1) = %u\n", average2(a, b));

    return 0;
}
