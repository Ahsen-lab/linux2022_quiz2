#include "test.h"
#include <stdint.h>
#include <stdio.h>

/* test 1. */
uint32_t average1(uint32_t a, uint32_t b)
{
    return (a >> 1) + (b >> 1) + (a & b & 1);
}

uint32_t average2(uint32_t a, uint32_t b)
{
    return (a & b) + ((a ^ b) >> 1);
}

/* test 2. */
uint32_t max(uint32_t a, uint32_t b)
{
    return a ^ ((a ^ b) & -(a < b));
}

/* test 3. */
uint64_t gcd64(uint64_t u, uint64_t v)
{
    if (!u || !v)
        return u | v;

    int shift;
    for (shift = 0; !((u | v) & 1); shift++) {
        u /= 2, v /= 2;
    }
    while (!(u & 1))
        u /= 2;
    do {
        while (!(v & 1))
            v /= 2;
        if (u < v) {
            v -= u;
        } else {
            uint64_t t = u - v;
            u = v;
            v = t;
        }
    } while (v);
    return u << shift;
}
