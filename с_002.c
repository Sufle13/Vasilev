#include <stdio.h>

float f_002_001(float a);
float f_002_002(float b);
float f_002_003(float c);
float f_003_004(int side, int radius);

int main(void)
{
    float a = 2.0;
    float f1 = f_002_001(a);
    printf("Square area a = %4.1f m: %4.1f m^2\n", a, f1);
    float b = 1;
    float f2 = f_002_002(b);
    printf("Area of a circle a = %4.1f m: %4.2f m^2\n", b, f2);
    float c = 100;
    float f3 = f_002_003(c);
    printf("Area of a circle a = %4.1f sm: %4.2f m^2\n", c, f3);

    float res = f_003_004(10, 100);
    printf("Smallest area: %4.2f m^2\n", res);

    return 0;
}