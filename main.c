#include <stdio.h>
#include <math.h>

double rad_to_deg(double rad)
{
    return rad * 180.0 / M_PI;
}

int main(void)
{
    double x;
    double rad;

    scanf("%lf", &x);

    if (x < 0)
    {
        printf("NG");
        return 0;
    }

    rad = atan(x);

    printf("%.2f", rad_to_deg(rad));

    return 0;
}