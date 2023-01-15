#include "class_Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C) : Triangle(sides_A, sides_B, sides_C, angle_A, angle_B, angle_C)
{
	if ((sides_A != sides_B) || (sides_A != sides_C) || (sides_B != sides_C) || (angle_A != angle_B) || (angle_A != angle_C) || (angle_B != angle_C))
	{
		if ((sides_A != sides_B) || (sides_A != sides_C) || (sides_B != sides_C))
		{
			throw Errors_paramGF("Стороны фигуры \"Равносторонний треугольник\" не равны между собой");
		}
		else
		{
			throw Errors_paramGF("Углы фигуры \"Равносторонний треугольник\" не равны между собой");
		}
	}
	name = "Равносторонний треугольник";
}