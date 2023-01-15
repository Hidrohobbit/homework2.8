#include "class_Square.h"

Square::Square(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Rectangle(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	if(sides_A != sides_B)
	{
		throw Errors_paramGF("Все стороны фигуры \"Квадрат\" должны быть равны");
	}
	name = "Квадрат";
}