#pragma once
#include "IBaseCommand.h"
class AddCommand : IBaseCommand
{
public:
	AddCommand(double x, double y);
	double add();
	double execute();

private:
	double x_ = 0;
	double y_ = 0;
};

