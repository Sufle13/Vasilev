#include <stdio.h>
#include <math.h>

int f_003_003(int a, int b, int c, int d)
{
    int max;
    int prmax;

    if ((a >= b) && (a >= c) && (a >= d))
    {
        max = a;
        if ((b >= c) && (b >= d))
            prmax = b;
        else
        {
            if (c >= d)
                prmax = c;
            else
                prmax = d;
        }
    }
    else
    {
        if ((b >= c) && (b >= d))
        {
            max = b;
            if ((a >= c) && (a >= d))
                prmax = a;
            else
            {
                if (c >= d)
                    prmax = c;
                else
                    prmax = d;
            }
        }
        else
        {
            if (c >= d)
            {
                max = c;
                if ((a >= b) && (a >= d))
                    prmax = a;
                else
                {
                    if (b >= d)
                        prmax = b;
                    else
                        prmax = d;
                }
            }
            else
                max = d;
            if ((a >= b) && (a >= c))
                prmax = a;
            else
            {
                if (b >= c)
                    prmax = b;
                else
                    prmax = c;
            }
        }
    }

    printf("%d\n", prmax);
}