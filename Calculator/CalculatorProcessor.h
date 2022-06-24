#pragma once
#include "wx/wx.h"
#include <string>
#include "ButtonFactory.h"
#include "IBaseCommand.h"

class cMain;
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	CalculatorProcessor() {};
	int left = 0;
	int right = 0;
	int BaseNumber = 0;
	std::string operation;
	std::string equation;
	void getOperands(cMain* window);
	int OP(cMain* window);
	std::vector<IBaseCommand*> commands;

public:
	static CalculatorProcessor* GetInstance();
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator= (const CalculatorProcessor& other) = delete;
	std::string answer;
	std::string Equal(cMain* window);
	void GetBinary(cMain* window);
	void GetDecimal(cMain* window);
	void Mod();
	void GetHexadecimal(cMain* window);
	void Negative(cMain* window);
	void SetBaseNumber(int number);
};

