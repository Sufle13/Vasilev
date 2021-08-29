#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float f_003_004(int side, int radius)
{
    float Side = side;
    float Radius = radius;
    if ((Side > 0) && (Radius > 0))
    {
        float Square_area = pow(Side / 100, 2);
        float Area_of_a_circle = M_PI * pow(Radius / 100, 2);
        if (Square_area > Area_of_a_circle)
            return Area_of_a_circle;
        else
            return Square_area;
    }
    else
        return -1;
}