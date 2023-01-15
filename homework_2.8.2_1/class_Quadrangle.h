#pragma once
#include "class_abstractFigure.h"

class Quadrangle : public Abstract_figure
{
public:
	void print_info() override;
	Quadrangle();
	Quadrangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D);
protected:
	std::string figure_info() override;

	int sides_A;
	int sides_B;
	int sides_C;
	int sides_D;

	int angle_A;
	int angle_B;
	int angle_C;
	int angle_D;
};