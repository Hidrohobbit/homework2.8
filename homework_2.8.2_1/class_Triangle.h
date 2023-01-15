#pragma once
#include "class_abstractFigure.h"
class Triangle : public Abstract_figure
{
public:
	void print_info() override;
	Triangle();
	Triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C);
protected:
	std::string figure_info() override;

	int sides_A;
	int sides_B;
	int sides_C;

	int angle_A;
	int angle_B;
	int angle_C;
};