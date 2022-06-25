#include "AddCommand.h"

AddCommand::AddCommand(double x, double y) : x_(x), y_(y) { }

double AddCommand::add() { return x_ + y_; }

double AddCommand::execute() { return add(); }