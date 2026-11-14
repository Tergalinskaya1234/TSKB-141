#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
/**
 * @brief Вычисляет значение заданной кусочной функции
 * @param  x Аргумент функции
 * @return Вычисляет значение функции
*/
double y(const double x);
/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
*/
double getDouble();
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
*/
int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}
/**
 * @brief Считает с клавиатуры значение с плавающей точкой
 * @return Считанное значение 
*/
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
/**
 * @brief Вычисляет значение кусочной функции
 * @param  x Введенное значение аргемента
 * @return Значение функции в точке x
*/
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
