#include "class_Parallelogram.h"

Parallelogram::Parallelogram(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Quadrangle(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	if ((sides_A != sides_C) || (sides_B != sides_D) || (angle_A != angle_C) || (angle_B != angle_D))
	{
		if ((sides_A != sides_C) || (sides_B != sides_D))
		{
			throw Errors_paramGF("Стороны фигуры \"Параллелограмм\" должны быть попарно равны");
		}
		else
		{
			throw Errors_paramGF("Углы фигуры \"Параллелограмм\" должны быть попарно равны");
		}
	}
	name = "Параллелограмм";
}

