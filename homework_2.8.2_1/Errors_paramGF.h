#pragma once
#include <iostream>
#include <string>

class Errors_paramGF : public std::exception
{
public:
	Errors_paramGF(const char* msg);
};