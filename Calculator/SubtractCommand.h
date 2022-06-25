#pragma once
#include "IBaseCommand.h"
class SubtractCommand : IBaseCommand
{
public:
	SubtractCommand(double x, double y);
	double sub();
	double execute();

private:
	double x_ = 0;
	double y_ = 0;
};