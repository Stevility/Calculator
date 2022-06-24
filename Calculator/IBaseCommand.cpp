#include "IBaseCommand.h"

double IBaseCommand::AddCommand()
{
	return x + y;
}

double IBaseCommand::SubtractCommand()
{
	return x - y;
}

double IBaseCommand::MultiplyCommand()
{
	return x * y;
}

double IBaseCommand::DivideCommand()
{
	return x / y;
}

double IBaseCommand::execute()
{
	AddCommand();
	SubtractCommand();
	MultiplyCommand();
	DivideCommand();
}
