#include "class_Rhomb.h"

Rhomb::Rhomb(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Parallelogram(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	if (sides_A != sides_B)
	{
		throw Errors_paramGF("Все стороны фигуры \"Ромб\" должны быть равны");
	}
	name = "Ромб";
}