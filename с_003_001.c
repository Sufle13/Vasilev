#include <stdio.h>
#include <math.h>

int f_003_001(int a, int b)
{
    int max;
    if (a >= b)
        max = a;
    else
        max = b;
    printf("%d\n", max);
}