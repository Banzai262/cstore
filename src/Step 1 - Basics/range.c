//
// Created by Guillaume on 2026-11-25.
//
#include "mathx.h"

int range_sum(const int from, const int to)
{
    if (from > to || from == to)
    {
        return 0;
    }

    int running_sum = from;

    for (int i = from + 1; i <= to; i++)
    {
        running_sum = mathx_add(running_sum, i);
    }

    return running_sum;
}
