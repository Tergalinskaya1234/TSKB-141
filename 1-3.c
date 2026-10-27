#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет потенциальную энергию пружины
 * @param x - растяжение пружины в миллиметрах
 * @param k - коэффициент жесткости пружины
 * @return потенциальная энергия пружины в джоулях
 */
double potential_energy(const double x, const double k);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполняется корректно
 */
int main()
{
    double x=0;
    double k=0;
    printf("Введение x и k: ");
    scanf("%lf %lf", &x, &k);
    printf("E=%lf\n", potential_energy(x, k));
    return 0;
}
double potential_energy(const double x, const double k){
    return (k*pow(x/1000, 2)) / 2;
}
