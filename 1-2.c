#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет среднее арифметическое
 * @param x - первое число
 * @param y - второе число
 * @return среднее арифметическое кубов
 */
double arithmetic_mean(const double x, const double y);
/**
 * @brief Вычисляет среднее геометрическое
 * @param x - первое число
 * @param y - второе число
 * @return среднее геометрическое модулей
 */
double geometric_mean(const double x, const double y);
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
    printf("arithmetic_mean=%lf\n", arithmetic_mean(x, y));
    printf("geometric_mean=%lf\n", geometric_mean(x, y));
    return 0;
}
double arithmetic_mean(const double x, const double y){
    return (pow(x, 3) + pow(y, 3)) / 2;
}
double geometric_mean(const double x, const double y){
    return sqrt(fabs(x) * fabs(y));
}
