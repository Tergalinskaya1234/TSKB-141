#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
double getDouble();
double y(const double x);
int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}
double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}
double y(const double x)
{
    const double a=0.3;
    if (a*x<1)
    {
        return a*sin((pow(x,2)+1)/10);
    }
    else
    {
        return a*cos((x-1)/10);
    }
}
