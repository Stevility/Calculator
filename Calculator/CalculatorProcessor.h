#pragma once
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _pros;
public:
    enum processor
    {
        OpAdd,
        OpSub,
        OpMult,
        OpDiv
    };
	static double PerfOp(
		double left, double right, int op);

};

