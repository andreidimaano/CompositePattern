#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"
#include "add.hpp"

//Zero Check
TEST(MultTest, MultZero) {
	Op* left = new Op(0);
	Op* right = new Op(0);
	Mult* test = new Mult(left, right);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultZeroString) {
	Op* left = new Op(0);
	Op* right = new Op(0);
	Mult* test = new Mult(left, right);
	std::string str = "0.000000 * 0.000000";
	EXPECT_EQ(test->stringify(), str);
}

//Whole NUm
TEST(MultTest, MultWholeNum) {
	Op* left = new Op(10);
	Op* right = new Op(5);
	Mult* test = new Mult(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 50);
}

TEST(MultTest, MultWholeNumString) {
	Op* left = new Op(10);
	Op* right = new Op(5);
	Mult* test = new Mult(left, right);
	std::string str = "10.000000 * 5.000000";
	EXPECT_EQ(test->stringify(), str);
}

//Whole using one Add as an op
TEST(MultTest, MultWholeNumAddString) {
	Op* addOne = new Op(10);
    Op* addTwo = new Op(10);
	Op* right = new Op(5);
    Add* left = new Add(addOne, addTwo); //10 + 10
	Mult* test = new Mult(left, right);
	std::string str = "10.000000 + 10.000000 * 5.000000"; //no parenthesis but should be (10+10) * 5
	EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest, MultWholeNumAdd) {
	Op* addOne = new Op(10);
    Op* addTwo = new Op(10);
	Op* right = new Op(5);
    Add* left = new Add(addOne, addTwo); //10 + 10 = 20  * 5
	Mult* test = new Mult(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 100);
}

//Whole using Two Add as an op
TEST(MultTest, MultWholeNumTwoAddString) {
	Op* addOne = new Op(10);
    Op* addTwo = new Op(10);
    Op* rightOne = new Op(10);
    Op* rightTwo = new Op(10);
    Add* left = new Add(addOne, addTwo); //10 + 10
    Add* right = new Add(rightOne, rightTwo);
	Mult* test = new Mult(left, right);
 	std::string str = "10.000000 + 10.000000 * 10.000000 + 10.000000"; //no parenthesis but should be (10+10) * 5
	EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest, MultWholeNumTwoAdd) {
	Op* addOne = new Op(10); Op* addTwo = new Op(10);
    Op* rightOne = new Op(10); Op* rightTwo = new Op(10);
    Add* left = new Add(addOne, addTwo); Add* right = new Add(rightOne, rightTwo);
	Mult* test = new Mult(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 400);
}

//Double
TEST(MultTest, MultDouble) {
	Op* left = new Op(10.5);
	Op* right = new Op(5.5);
	Mult* test = new Mult(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 57.75);
}

TEST(MultTest, MultDoubleString) {
	Op* left = new Op(10.5);
	Op* right = new Op(5.5);
	Mult* test = new Mult(left, right);
	std::string str = "10.500000 * 5.500000";
	EXPECT_EQ(test->stringify(), str);
}

//Double using one Add as an op
TEST(MultTest, MultDoubleAddString) {
	Op* addOne = new Op(10.5);
    Op* addTwo = new Op(10.5);
	Op* right = new Op(5.5);
    Add* left = new Add(addOne, addTwo); //10 + 10
	Mult* test = new Mult(left, right);
	std::string str = "10.500000 + 10.500000 * 5.500000"; //no parenthesis but should be (10+10) * 5
	EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest, MultDoubleNumAdd) {
	Op* addOne = new Op(10.5);
    Op* addTwo = new Op(10.5);
	Op* right = new Op(5.5);
    Add* left = new Add(addOne, addTwo); //10 + 10 = 20  * 5
	Mult* test = new Mult(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 115.5);
}

//Double using Two Add as an op
TEST(MultTest, MultDoubleTwoAddString) {
	Op* addOne = new Op(10.5);
    Op* addTwo = new Op(10.5);
    Op* rightOne = new Op(10.5);
    Op* rightTwo = new Op(10.5);
    Add* left = new Add(addOne, addTwo); //10 + 10
    Add* right = new Add(rightOne, rightTwo);
	Mult* test = new Mult(left, right);
 	std::string str = "10.500000 + 10.500000 * 10.500000 + 10.500000"; //no parenthesis but should be (10+10) * 5
	EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest,MultDoubleTwoAdd) {
	Op* addOne = new Op(10.5); Op* addTwo = new Op(10.5);
    Op* rightOne = new Op(10.5); Op* rightTwo = new Op(10.5);
    Add* left = new Add(addOne, addTwo); Add* right = new Add(rightOne, rightTwo);
	Mult* test = new Mult(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 441);
}



#endif 
