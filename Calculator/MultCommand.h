#pragma once
#include "IBaseCommand.h"
class MultCommand : IBaseCommand
{
public:
	MultCommand(double x, double y);
	double mult();
	double execute();

private:
	double x_ = 0;
	double y_ = 0;
};

