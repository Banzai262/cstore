//
// Created by Guillaume on 2026-11-24.
//
#include "mathx.h"

static int min_int(const int a, const int b)
{
    return a < b ? a : b;
}

int mathx_add(const int a, const int b)
{
    return a + b;
}

int mathx_clamp(const int value, const int min, const int max)
{
    // if (min_int(min, value) == value)
    // {
    //     return min;
    // }
    //
    // if (min_int(max, value) == value)
    // {
    //     return value;
    // }
    //
    // return max;

    if (value < min) return min;
    if (value > max) return max;
    return value;
}

int mathx_is_even(const int value)
{
    if (value % 2 == 0)
    {
        return 1;
    }

    return 0;
}
