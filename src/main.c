#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p = malloc(100);
    p[0] = 'x';
    printf("Hello %c\n", p[0]);

    return 0;
}