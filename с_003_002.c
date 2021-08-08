#include <stdio.h>
#include <math.h>

int f_003_002(int a, int b, int c, int d)
{
    int max;
    if ((a >= b) && (a >= c) && (a >= d))
        max = a;
    else
    {
        if ((b >= c) && (b >= d))
            max = b;
        else
        {
            if (c >= d)
                max = c;
            else
                max = d;
        }
    }
    printf("%d\n", max);
}