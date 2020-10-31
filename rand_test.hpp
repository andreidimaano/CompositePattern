#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandLowerCheck) {
	Base* test = new Rand();
	EXPECT_LE(0, test->evaluate());
}

TEST(RandTest, RandUpperCheck) {
	Base* test = new Rand();
	EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, RandUpperCheckString) {
	Base* test = new Rand();
	std::string str = std::to_string(test->evaluate());
	EXPECT_EQ(test->stringify(), str);
}

#endif 
