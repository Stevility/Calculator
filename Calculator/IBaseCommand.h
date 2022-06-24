#pragma once
class IBaseCommand
{
public: 
	virtual double execute() = 0;

private:
	double AddCommand();
	double SubtractCommand();
	double MultiplyCommand();
	double DivideCommand();
	double execute();
	double x = 0;
	double y = 0;
};

