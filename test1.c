#include <stdio.h>
#include <stdint.h>
#include "test1.h"

int main()
{
    uint32_t a = UINT32_MAX, b = UINT32_MAX;

    printf("average 1 = %u\n", average1(a, b));
    printf("average 2 = %u\n", average2(a, b));

    return 0;
}



uint32_t average1(uint32_t a1, uint32_t b1)
{
    return (a1 >> 1) + (b1 >> 1) + (a1 & b1 & 1);
}

uint32_t average2(uint32_t a2, uint32_t b2)
{
    return (a2 & b2) + ((a2 ^ b2) >> 1);
}
