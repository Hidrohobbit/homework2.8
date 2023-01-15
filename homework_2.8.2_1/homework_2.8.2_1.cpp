#include "IGeometrical_figure.h"

#include "class_abstractFigure.h"

#include "class_Triangle.h"
#include "class_Rectangular_triangle.h"
#include "class_Isosceles_triangle.h"
#include "class_Equilateral_triangle.h"

#include "class_Quadrangle.h"
#include "class_Parallelogram.h"
#include "class_Rectangle.h"
#include "class_Rhomb.h"
#include "class_Square.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		Abstract_figure fig(0);
		Triangle tri(10, 20, 30, 50, 60, 70);
		Rectangular_triangle rec_tri(10, 20, 30, 40, 50, 90);
		Isosceles_triangle iso_tri(10, 20, 10, 50, 80, 50);
		Equilateral_triangle equ_tri(30, 30, 30, 60, 60, 60);

		Quadrangle quad(10, 20, 30, 40, 90, 90, 90, 90);
		Parallelogram par_quad(30, 40, 30, 40, 100, 80, 100, 80);
		Rectangle rec_quad(30, 40, 30, 40, 90, 90, 90, 90);
		Square squ_quad(20, 20, 20, 20, 90, 90, 90, 90);
		Rhomb rho_quad(40, 40, 40, 40, 100, 80, 100, 80);

		fig.print_info();
		tri.print_info();
		rec_tri.print_info();
		iso_tri.print_info();
		equ_tri.print_info();

		quad.print_info();
		par_quad.print_info();
		rec_quad.print_info();
		squ_quad.print_info();
		rho_quad.print_info();
	}
	catch (Errors_paramGF& ex)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << ex.what();
	}

}