#include "class_Triangle.h"

void Triangle::print_info()
{
	std::cout << name << " создан " << figure_info() << std::endl;
}
std::string Triangle::figure_info()
{
	return "(Стороны: a = " + std::to_string(sides_A) + " b = " + std::to_string(sides_B) + " c = " + std::to_string(sides_C) + " Углы: A = " + std::to_string(angle_A) + " B = " + std::to_string(angle_B) + " C = " + std::to_string(angle_C) + ")";
}

Triangle::Triangle()
{
	sides_A = 10;
	sides_B = 10;
	sides_C = 10;

	angle_A = 60;
	angle_B = 60;
	angle_C = 60;

	sides_count = 3;
	name = "Треугольник";
}
Triangle::Triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C)
{
	if( (sides_A <= 0) || (sides_B <= 0) || (sides_C <= 0) )
	{
		if(sides_A <= 0)
		{
			throw Errors_paramGF("Сторона A фигуры \"Треугольник\" должна быть строго больше 0");
		}
		else if (sides_B <= 0)
		{
			throw Errors_paramGF("Сторона B фигуры \"Треугольник\" должна быть строго больше 0");
		}
		else if (sides_C <= 0)
		{
			throw Errors_paramGF("Сторона C фигуры \"Треугольник\" должна быть строго больше 0");
		}
	}
	else if ( ( (angle_A <= 0) || (angle_A > 180) ) || ( (angle_B <= 0) || (angle_B > 180) ) || ( (angle_C <= 0) || (angle_C > 180) ) )
	{
		if ((angle_A <= 0) || (angle_A > 180) )
		{
			if ((angle_A <= 0))
			{
				throw Errors_paramGF("Угол A фигуры \"Треугольник\" должен быть строго больше 0");
			}
			else
			{
				throw Errors_paramGF("Угол A фигуры \"Треугольник\" должен быть меньше 180");
			}
		}
		else if ((angle_B <= 0) || (angle_B > 180))
		{
			if ((angle_B <= 0))
			{
				throw Errors_paramGF("Угол B фигуры \"Треугольник\" должен быть строго больше 0");
			}
			else
			{
				throw Errors_paramGF("Угол B фигуры \"Треугольник\" должен быть меньше 180");
			}
		}
		else
		{
			if ((angle_C <= 0))
			{
				throw Errors_paramGF("Угол C фигуры \"Треугольник\" должен быть строго больше 0");
			}
			else
			{
				throw Errors_paramGF("Угол C фигуры \"Треугольник\" должен быть меньше 180");
			}
		}
	}
	else if ( ((angle_A + angle_B + angle_C) != 180) )
	{
		throw Errors_paramGF("Сумма углов не равна 180");
	}
	else
	{
		this->sides_A = sides_A;
		this->sides_B = sides_B;
		this->sides_C = sides_C;

		this->angle_A = angle_A;
		this->angle_B = angle_B;
		this->angle_C = angle_C;

		sides_count = 3;
		name = "Треугольник";
	}
}
