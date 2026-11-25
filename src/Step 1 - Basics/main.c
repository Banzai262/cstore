#include <stdio.h>
#include "mathx.h"
#include "range.h"

int main(void)
{
    const int a = 10;
    const int b = 20;
    const int value = 22;

    printf("Sum of a and b is %d\n", mathx_add(a, b));
    printf("Is a even ? %d(0:false, 1:true)\n", mathx_is_even(a));
    printf("Clamping of a, b and value is %d\n", mathx_clamp(value,a, b));

    printf("Sum from %d to %d is %d\n", a, b, range_sum(a, b));

    return 0;
}