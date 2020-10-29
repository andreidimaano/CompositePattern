#include "rand.hpp"

Rand::Rand() : Base() {
  this->value = rand() % 100;
};

double Sub::evaluate() {
  return this->value;
}

std::string Div::stringify() {
  return to_string(this->value);
}
