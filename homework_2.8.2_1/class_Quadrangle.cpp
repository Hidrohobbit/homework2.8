#include "class_Quadrangle.h"


void Quadrangle::print_info()
{
    std::cout << name << " ������ " << figure_info() << std::endl;
}
std::string Quadrangle::figure_info()
{
    return "(�������: a = " + std::to_string(sides_A) + " b = " + std::to_string(sides_B) + " c = " + std::to_string(sides_C) + " d = " + std::to_string(sides_D) + " ����: A = " + std::to_string(angle_A) + " B = " + std::to_string(angle_B) + " C = " + std::to_string(angle_C) + " D = " + std::to_string(angle_D) + ")";
}
Quadrangle::Quadrangle()
{
    sides_A = 10;
    sides_B = 10;
    sides_C = 10;
    sides_D = 10;

    angle_A = 90;
    angle_B = 90;
    angle_C = 90;
    angle_D = 90;

    sides_count = 4;
    name = "��������������";
}
Quadrangle::Quadrangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D)
{
    if ( (sides_A <= 0) || (sides_B <= 0) || (sides_C <= 0) || (sides_D <= 0) )
    {
        if (sides_A <= 0)
        {
            throw Errors_paramGF("������� A ������ \"��������������\" ������ ���� ������ ������ 0");
        }
        else if (sides_B <= 0)
        {
            throw Errors_paramGF("������� B ������ \"��������������\" ������ ���� ������ ������ 0");
        }
        else if (sides_C <= 0)
        {
            throw Errors_paramGF("������� C ������ \"��������������\" ������ ���� ������ ������ 0");
        }
        else
        {
            throw Errors_paramGF("������� D ������ \"��������������\" ������ ���� ������ ������ 0");
        }
    }
    else if ( ((angle_A <= 0) || (angle_A > 180)) || ((angle_B <= 0) || (angle_B > 180)) || ((angle_C <= 0) || (angle_C > 180)) || ((angle_D <= 0) || (angle_D > 180)))
    {
        if ((angle_A <= 0) || (angle_A > 180))
        {
            if ((angle_A <= 0))
            {
                throw Errors_paramGF("���� A ������ \"��������������\" ������ ���� ������ ������ 0");
            }
            else
            {
                throw Errors_paramGF("���� A ������ \"��������������\" ������ ���� ������ 180");
            }
        }
        else if ((angle_B <= 0) || (angle_B > 180))
        {
            if ((angle_B <= 0))
            {
                throw Errors_paramGF("���� B ������ \"��������������\" ������ ���� ������ ������ 0");
            }
            else
            {
                throw Errors_paramGF("���� B ������ \"��������������\" ������ ���� ������ 180");
            }
        }
        else if ((angle_C <= 0) || (angle_B > 180))
        {
            if ((angle_C <= 0))
            {
                throw Errors_paramGF("���� C ������ \"��������������\" ������ ���� ������ ������ 0");
            }
            else
            {
                throw Errors_paramGF("���� C ������ \"��������������\" ������ ���� ������ 180");
            }
        }
        else
        {
            if ((angle_D <= 0))
            {
                throw Errors_paramGF("���� D ������ \"��������������\" ������ ���� ������ ������ 0");
            }
            else
            {
                throw Errors_paramGF("���� D ������ \"��������������\" ������ ���� ������ 180");
            }
        }
    }
    else if ( ((angle_A + angle_B + angle_C + angle_D) != 360) )
    {
        throw Errors_paramGF("����� ����� �� ����� 360");
    }
    else
    {
        this->sides_A = sides_A;
        this->sides_B = sides_B;
        this->sides_C = sides_C;
        this->sides_D = sides_D;

        this->angle_A = angle_A;
        this->angle_B = angle_B;
        this->angle_C = angle_C;
        this->angle_D = angle_D;

        sides_count = 4;
        name = "��������������";
    } 
}