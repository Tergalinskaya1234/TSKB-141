#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет среднее арифметическое
 * @param x - первое число
 * @param y - второе число
 * @return среднее арифметическое кубов
 */
double a(const double x, const double y);
/**
 * @brief Вычисляет среднее геометрическое
 * @param x - первое число
 * @param y - второе число
 * @return среднее геометрическое модулей
 */
double b(const double x, const double y);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполняется корректно
 */
int main()
{
    double x;
    double y;
    printf("Введение двух чисел: ");
    scanf("%lf %lf", &x, &y);
    printf("a=%lf\n", a(x, y));
    printf("b=%lf\n", b(x, y));
    return 0;
}
double a(const double x, const double y){
    return (pow(x, 3) + pow(y, 3)) / 2;
}
double b(const double x, const double y){
    return sqrt(fabs(x) * fabs(y));
}

