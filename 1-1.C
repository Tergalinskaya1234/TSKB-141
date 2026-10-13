#include <stdio.h>
#include <math.h>

double a(const double x, const double y, const double z);
double b(const double x, const double y, const double z);

int main() 
{
    const double x = -4.8;
    const double y = 17.5;
    const double z = 3.2;
    
    printf("a = %lf\n", a(x, y, z));
    printf("b = %lf\n", b(x, y, z));
    
    return 0;
}

double a(const double x, const double y, const double z){
    return y*z*pow(x,2)-(z/pow(sin(x/z),2));
}
double b(const double x, const double y, const double z){
    return z*exp(-1*(pow(z,1/2))) * cos ((y*x)/z);
}
