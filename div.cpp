#include "div.hpp"

Div::Div(Base* left, Base* right) : Base() {
  this->left = left;
  this->right = right;
}

double Div::evaluate() {
  return this->left->evaluate() / this->right->evaluate();
}

std::string Div::stringify() {
  return (this->left->std::stringify() + " / " + this->right->std::stringify());
}

