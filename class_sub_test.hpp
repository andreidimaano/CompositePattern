#ifndef __CLASS_SUB_TEST__
#define __CLASS_SUB_TEST__

#include "gtest/gtest.h"

#include "sub.hpp"
#include "op.hpp"

//2 non zero values
TEST(ClassSubtractionTest, SubEvaluateNonZero) {
	Base* left = new Op(10.0);
	Base* right = new Op(20.0);
	Base* test = new Sub(left,right);
	EXPECT_DOUBLE_EQ(test->evaluate(), -10.0);
}

TEST(ClassSubtractionTest, SubEvaluateNonZeroString) {
	Base* left = new Op (10.0);
	Base* right = new Op(20.0);
	Base* test = new Sub(left, right);
	std::string str = "10.000000 - 20.000000";
	EXPECT_EQ(test->stringify(), str);
}

//1 pos, 1 neg
TEST(ClassSubtractionTest, SubEvaluatePosNeg){
	Base* left = new Op(-10.0);
	Base* right = new Op(20.0);
	Base* test = new Sub(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), -30.0);
}

TEST(ClassSubtractionTest, SubEvaluatePosNegString){
	Base* left = new Op(-10.0);
	Base* right = new Op(20.0);
	Base* test = new Sub(left, right);
	std::string str = "-10.000000 - 20.000000";
	EXPECT_EQ(test->stringify(), str);
}


#endif
