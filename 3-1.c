#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>
/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @param message Сообщение для пользователя
 * @return Считанное значение
 */
double getValue(const char* message);
/**
 * @brief Проверяет, что шаг является положительным числом
 * @param step Считанное значение шага
 */
void checkStep(const double step);
/**
 * @brief Проверяет корректность заданного отрезка
 * @param xbegin Начало отрезка
 * @param xend Конец отрезка
 */
void checkSegment(const double xbegin,const double xend);
/**
 * @brief Проверяет, принадлежит ли аргумент области определения функции
 * @param x Значение аргумента
 * @return true, если аргумент принадлежит области определения, иначе false
 */
bool isOOF(const double x);
/**
 * @brief Вычисляет значение функции y = x + cos(x^0.52 + 2)
 * @param x значение аргумента
 * @return Рассчитанное значение функции
 */
double getY(const double x);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double xbegin = getValue("Enter segment start: ");
    double xend = getValue("Enter segment end: ");
    double step = getValue("Enter step: ");
    checkStep(step);
    checkSegment(xbegin,xend);
    for (double x = xbegin; x < xend + step/2; x += step)
    {
        if (isOOF(x))
        {
            printf("x = %lf, y = %lf\n",x, getY(x));
        }
        else
        {
            printf("y is not define\n");
        }
    }
    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n",message);
    }
    double value = 0;
    if (scanf("%lf", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void checkStep(const double step)
{
    if (step<=0)
    {
        printf("Error, step have to be positive");
        exit(1);
    }
}

void checkSegment(const double xbegin,const double xend)
{
    if (xbegin > xend || xbegin < 0)
    {
        printf("Error, incorrect segment");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return (x>=0);
}

double getY(const double x)
{
    return x+cos(pow(x,0.52)+2);
}
