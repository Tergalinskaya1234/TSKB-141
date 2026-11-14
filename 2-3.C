#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * @brief Проверяет, можно ли построить треугольник
 * @param a Первая сторона треугольника
 * @param b Вторая сторона треугольника
 * @param c Третья сторона треугольника
 * @return 1, если треугольник существует, иначе 0
 */
int isTriangle(const double a, const double b, const double c);
/**
 * @brief Проверяет, является ли треугольник остроугольным
 * @param a Первая сторона треугольника
 * @param b Вторая сторона треугольника
 * @param c Третья сторона треугольника
 * @return 1, если треугольник остроугольный, иначе 0
 */
int isAcute(const double a, const double b, const double c);
/**
 * @brief Считывает с клавиатуры число с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Проверяет, что введенное число положительное
 * @param value Введенное значение
 */
void checkPositive(const double value);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    printf("Enter a: ");
    double a = getDouble();
    checkPositive(a);
    printf("Enter b: ");
    double b = getDouble();
    checkPositive(b);
    printf("Enter c: ");
    double c = getDouble();
    checkPositive(c);
    if (isTriangle(a,b,c))
    {
        printf("Triangle exists\n");
        if (isAcute(a,b,c))
        {
            printf("Triangle is acute");
        }
        else
        {
            printf("Triangle is not acute");
        }
    }
    else
    {
        printf("Triangle does not exist");
    }
    return 0;
}
/**
 * @brief Проверяет возможность построения треугольника
 * @param a Первая сторона
 * @param b Вторая сторона
 * @param c Третья сторона
 * @return 1, если сумма любых двух сторон больше третьей
 */
int isTriangle(const double a, const double b, const double c)
{
    return (a+b>c && a+c>b && b+c>a);
}
/**
 * @brief Определяет, является ли треугольник остроугольным
 * @param a Первая сторона
 * @param b Вторая сторона
 * @param c Третья сторона
 * @return 1, если треугольник остроугольный
 */
int isAcute(const double a, const double b, const double c)
{
    return (pow(a,2)<pow(b,2)+pow(c,2) && pow(b,2)<pow(a,2)+pow(c,2) && pow(c,2)<pow(b,2)+pow(a,2));
}
/**
 * @brief Считывает число с клавиатуры
 * @return Считанное значение
 */
double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value)!=1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}
/**
 * @brief Проверяет, что число является положительным
 * @param value Введенное число
 */
void checkPositive(const double value)
{
    if (value <= 0)
    {
        printf("Error");
        exit(1);
    }
}
