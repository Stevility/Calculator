#pragma once
#include <string>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _pros;
	int baseNum;
	CalculatorProcessor() {}
public:
	static CalculatorProcessor* GetInstance() 
	{

		if (_pros == NULL)
		{
			_pros = new CalculatorProcessor();
		}

		return _pros;
	}

	void SetBaseNumber(int number)
	{
		baseNum = number;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator= (const CalculatorProcessor& other) = delete;

	std::string GetDecimal() {
		return std::to_string(baseNum);
	}

	std::string GetHexadecimal()
	{
		std::string results = "";
		int number = baseNum;
		while (number > 0)
		{
			int mod = number % 16;
			if (mod < 10)
			{
				results = std::to_string(mod) + results;
			}
			else if (mod == 10)
			{
				results = "A" + results;
			}
			else if (mod == 11)
			{
				results = "B" + results;
			}
			else if (mod == 12)
			{
				results = "C" + results;
			}
			else if (mod == 13)
			{
				results = "D" + results;
			}
			else if (mod == 14)
			{
				results = "E" + results;
			}
			else if (mod == 15)
			{
				results = "F" + results;
			}
			number = number / 16;
		}
		results = "0x" + results;
		return results;
	}
	std::string GetBinary() 
	{
		std::string result = "";
		int number = baseNum;
		for (int i = 0; i < 32; i++)
		{
			if (baseNum % 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}
			number = number / 2;
		}
		return result;
	}



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

