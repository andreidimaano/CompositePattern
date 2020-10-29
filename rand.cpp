#include "rand.hpp"

Rand::Rand() : Base() {
  this->value = rand() % 100;
};

double Rand::evaluate() {
  return this->value;
}

std::string Rand::stringify() {
  return std::to_string(this->value);
}
