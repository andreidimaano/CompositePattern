#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"
#include "op.hpp"

//invalid div
TEST(DivTest, DivZeroCheck) {
	Op* left = new Op(0);
	Op* right = new Op(0);
	Div* test = new Div(left, right);
	EXPECT_EQ(test->evaluate(); -1); //should be invalid??
}

//dividing multiples of each other
TEST(DivTest, DivWholeNum) {
	Op* left = new Op(10);
	Op* right = new Op(5);
	Div* test = new Div(left, right);
	EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivWholeNumString) {
	Op* left = new Op(10);
	Op* right = new Op(5);
	Div* test = new Div(left, right);
	std::string str = "10.000000 / 5.000000";
	EXPECT_EQ(test->stringify(), str);
}

//testing fractions
TEST(DivTest, DivFraction){
	Op* left = new Op(1);
	Op* right = new Op(2);
	Div* test = new Div(left, right);
	std::string str = "1.000000 / 2.000000";	
	EXPECT_EQ(test->stringify(), str);

#endif 
