#pragma once
#include <iostream>
#include <string>
#include "Errors_paramGF.h"

class IGeometrical_figure
{
public:
	virtual void print_info() = 0;
protected:
	virtual std::string figure_info() = 0;
};