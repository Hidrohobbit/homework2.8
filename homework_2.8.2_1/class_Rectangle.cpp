#include "class_Rectangle.h"

Rectangle::Rectangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Parallelogram(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	if ((angle_A != 90) || (angle_B != 90) || (angle_C != 90) || (angle_D != 90))
	{
		throw Errors_paramGF("Углы фигуры \"Прямоугольник\" должны быть равны 90");
	}
	name = "Прямоугольник";
}
