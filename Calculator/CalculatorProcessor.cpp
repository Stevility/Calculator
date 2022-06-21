#include "CalculatorProcessor.h"

double CalculatorProcessor::PerfOp(double left, double right, int op)
{
	double result{};

	switch (op) {
	case OpAdd:
	{
		result = left + right;
		break;
	}
	case OpSub:
	{
		result = left - right;
		break;
	}
	case OpMult:
	{
		result = left * right;
		break;
	}
	case OpDiv:
	{
		if (right != 0) {
			result = left / right;
		}
		break;
	}
	return result;
	}
}

