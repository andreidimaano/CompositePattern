#include "op.hpp"

Op::Op() : Base() {
	this->value = 0;
}

Op::Op(double val) : Base() {
	this->value = val;
}

double OP::evaluate() {
	return this->value;
}

std::string OP::stringify() {
	return std::to_string(this->value);
}
