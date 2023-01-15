#pragma once
#include "IGeometrical_figure.h"

class Abstract_figure : public IGeometrical_figure
{
public:
	void print_info() override;
	Abstract_figure();
	Abstract_figure(int sides_count);
protected:
	std::string figure_info() override;

	int sides_count;
	std::string name = "Абстрактная фигура";

};