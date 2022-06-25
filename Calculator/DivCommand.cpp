#include "DivCommand.h"

DivCommand::DivCommand(double x, double y) : x_(x), y_(y) { }

double DivCommand::div() { return x_ / y_; }

double DivCommand::execute() { return div(); }
