#include "CalculatorProcessor.h"
#include "cMain.h"
#include "IBaseCommand.cpp"

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_processor == nullptr)
		_processor = new CalculatorProcessor();

	return _processor;
}

void CalculatorProcessor::SetBaseNumber(int number)
{
	left = number;
}

int CalculatorProcessor::OP(cMain* window)
{
	equation = window->m_Txt1->GetLineText(0).ToStdString();
	int operationLocation = -1;

	for (int i = 1; i < equation.size(); i++)
	{
		if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/' || equation[i] == '%')
		{
			operation = equation[i];
			operationLocation = i;
			break;
		}
	}
	return operationLocation;
}

void CalculatorProcessor::getOperands(cMain* window)
{
	int operationLocation = OP(window);
	int findEqual = equation.find("=");
	if (answer != "" && operation == "")
	{
		answer = answer;
	}
	else if (findEqual == 0 || operationLocation == 0 || operation == "")
	{
		answer = "";
	}
	else
	{
		operation = equation[operationLocation];
		if (operationLocation + 1 == findEqual)
		{
			left = std::stoi(equation.substr(0, operationLocation));
			operation = "";
			answer = answer = std::to_string(left);
		}
		else
		{
			left = std::stoi(equation.substr(0, operationLocation));
			right = std::stoi(equation.substr(operationLocation + 1, findEqual));
		}
	}

}

void CalculatorProcessor::Mod()
{
	int result = left % right;
	answer = std::to_string(result);
}


void CalculatorProcessor::Negative(cMain* window)
{
	int op = OP(window);
	int Negate = equation.find("+/-");
	if (Negate == 0)
	{
		window->m_Txt1->Clear();
	}
	else if (op + 1 == Negate)
	{
		window->m_Txt1->Clear();
		int size = equation.size();
		for (int i = 0; i < size - Negate; i++)
		{
			equation.pop_back();
		}
		window->m_Txt1->SetValue(equation);
	}
	else if (operation == "" || Negate < op || op == 0)
	{
		left = std::stoi(equation.substr(0, Negate));
		left *= -1;
		window->m_Txt1->SetValue(std::to_string(left));
	}
	else if (Negate > op)
	{
		left = std::stoi(equation.substr(0, op));
		right = std::stoi(equation.substr(op + 1));
		right *= -1;
		window->m_Txt1->SetValue(std::to_string(left) + operation + std::to_string(right));
	}
}

std::string CalculatorProcessor::Equal(cMain* window)
{
	getOperands(window);
	if (operation == "+")
	{
	}
	else if (operation == "-")
	{
	}
	else if (operation == "*")
	{
	}
	else if (operation == "/")
	{
	}
	else if (operation == " % ")
	{
		Mod();
	}
	window->m_Txt1->Clear();
	if (answer == "Can't divide by zero")
	{
		operation = "";
		return answer;
	}
	if (answer != "")
	{
		left = std::stoi(answer);
		right = NULL;
	}
	operation = "";
	return answer;
}

void CalculatorProcessor::GetDecimal(cMain* window)
{
	window->m_Txt1->SetValue(answer);
}

void CalculatorProcessor::GetBinary(cMain* window)
{
	std::string result = "";
	std::string BNumber = "";
	if (answer == "")
	{
		window->m_Txt1->Clear();
		window->m_Txt1->AppendText("Must enter number");
		return;
	}
	int number = std::stoi(answer);
	int mod = 0;
	while (number > 0)
	{
		mod = number % 2;
		result = std::to_string(mod) + result;
		number /= 2;
	}
	window->m_Txt1->SetValue(result);
}

void CalculatorProcessor::GetHexadecimal(cMain* window)
{
	std::string result = "";
	if (answer == "")
	{
		return;
	}
	int number = std::stoi(answer);
	int mod = 0;
	while (number > 0)
	{
		mod = number % 16;
		if (mod < 10)
		{
			result = std::to_string(mod) + result;
		}
		else if (mod == 10)
		{
			result = "A" + result;
		}
		else if (mod == 11)
		{
			result = "B" + result;
		}
		else if (mod == 12)
		{
			result = "C" + result;
		}
		else if (mod == 13)
		{
			result = "D" + result;
		}
		else if (mod == 14)
		{
			result = "E" + result;
		}
		else if (mod == 15)
		{
			result = "F" + result;
		}

		number /= 16;
	}

	result = "0x" + result;
	window->m_Txt1->SetValue(result);
}