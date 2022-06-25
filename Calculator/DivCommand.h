#pragma once
#include "IBaseCommand.h"
class DivCommand : IBaseCommand
{
public:
	DivCommand(double x, double y);
	double div();
	double execute();

private:
	double x_ = 0;
	double y_ = 0;
};
