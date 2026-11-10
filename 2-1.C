#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 *@brief Вычисляет площадь грани куба
 *@param side длина ребра куба
 *@return Рассчитанное значение
 */
double face_area(const double side);
/**
 *@brief Вычисляет площадь полной поверхности куба
 *@param side длина ребра куба
 *@return Рассчитанное значение
 */
double total_area(const double side);
/**
 *@brief Вычисляет объем куба
 *@param side длина ребра куба
 *@return Рассчитанное значение
 */
double volume(const double side);
/**
 *@brief Считает с клавиатуры значение с плавающей точкой
 *@return Считанное значение
 */
double getDouble();
/**
 *@brief Проверяет, что сторона - положительное число
 *@return side считанное значение стороны куба
 */
void checkside(const double side);
/**
* @brief Точка входа в программу
* @return 0, программа выполнена корректно, иначе не 0
*/
int main()
{
    printf("Enter side: ");
    double side=getDouble();
    checkside(side);
    printf("Face area is %lf\n", face_area(side));
    printf("Total area is %lf\n", total_area(side));
    printf("Volume is %lf\n", volume(side)); 
    return 0;
}
double face_area(const double side)
{
    return pow(side,2);
}
double total_area(const double side)
{
    return 6*pow(side,2);
}
double volume(const double side)
{
    return pow(side,3);
}
double getDouble()
{
    double side=0.0;
    if (scanf("%lf",&side)!=1)
    {
        printf("Error");
        exit(1);
    }
    return side;
}
void checkside(const double side)
{
    if (side<=0)
    {
        printf("Error");
        exit(1);
    }
}
