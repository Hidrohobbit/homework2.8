#include "class_abstractFigure.h"

void Abstract_figure::print_info()
{
    std::cout << name << " создана." << figure_info();
}
std::string Abstract_figure::figure_info()
{
    return "Количество сторон: " + std::to_string(sides_count);
}

Abstract_figure::Abstract_figure()
{
    sides_count = 0;
}
Abstract_figure::Abstract_figure(int sides_count)
{
    if (sides_count < 0)
    {
        throw Errors_paramGF("Количество сторон фигуры \"Абстрактная фигура\" должно быть больше либо равно 0");
    }
    else
    {
        this->sides_count = sides_count;
    }
}