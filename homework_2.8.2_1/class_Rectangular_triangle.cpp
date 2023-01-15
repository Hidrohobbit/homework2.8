#include "class_Rectangular_triangle.h"

Rectangular_triangle::Rectangular_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C) : Triangle(sides_A, sides_B, sides_C, angle_A, angle_B, angle_C)
{
	if (angle_C != 90)
	{
		throw Errors_paramGF("Угол С фигуры \"Прямоугольный треугольник\" не равен 90");
	}
	name = "Прямоугольный треугольник";
}