#include "class_Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C) : Triangle(sides_A, sides_B, sides_C, angle_A, angle_B, angle_C)
{
	if ((sides_A != sides_C) || (angle_A != angle_C) )
	{
		if (sides_A != sides_C)
		{
			throw Errors_paramGF("Стороны A и C фигуры \"Равнобедренный треугольник\" не равны");
		}
		else if (angle_A != angle_C)
		{
			throw Errors_paramGF("Углы A и C фигуры \"Равнобедренный треугольник\" не равны");
		}
	}
	name = "Равнобедренный треугольник";
}