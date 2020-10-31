#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"
#include "pow.hpp"

//Zero Check
TEST(PowTest, PowZero) {
	Base* left = new Op(0);
	Base* right = new Op(0);
	Base* test = new Pow(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowZeroString) {
	Base* left = new Op(0);
	Base* right = new Op(0);
	Base* test = new Pow(left, right);
	std::string str = "0.000000 ** 0.000000";
	EXPECT_EQ(test->stringify(), str);
}

//Whole NUm
TEST(PowTest, PowWholeNum) {
	Base* left = new Op(2);
	Base* right = new Op(5);
	Base* test = new Pow(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 32);
}

TEST(PowTest, PowWholeNumString) {
	Base* left = new Op(2);
	Base* right = new Op(5);
	Base* test = new Pow(left, right);
	std::string str = "2.000000 ** 5.000000";
	EXPECT_EQ(test->stringify(), str);
}

//Whole using one Add as an op
TEST(PowTest, PowWholeNumAddString) {
	Base* addOne = new Op(2);
        Base* addTwo = new Op(2);
	Base* right = new Op(5);
        Base* left = new Add(addOne, addTwo); //2 + 2
	Base* test = new Pow(left, right);
	std::string str = "2.000000 + 2.000000 ** 5.000000"; //no parenthesis but should be (2+2) * 5
	EXPECT_EQ(test->stringify(), str);
}

#endif 