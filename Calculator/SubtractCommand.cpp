#include "SubtractCommand.h"

SubtractCommand::SubtractCommand(double x, double y) : x_(x), y_(y) { }

double SubtractCommand::sub() { return x_ - y_; }

double SubtractCommand::execute() { return sub(); }
