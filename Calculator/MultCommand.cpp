#include "MultCommand.h"

MultCommand::MultCommand(double x, double y) : x_(x), y_(y) { }

double MultCommand::mult() { return x_ * y_; }

double MultCommand::execute() { return mult(); }
