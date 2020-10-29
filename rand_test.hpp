#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandLowerCheck) {
	Rand* test = new Rand();
	EXPECT_LE(0, test->evaluate());
}

TEST(RandTest, RandUpperCheck) {
	Rand* test = new Rand();
	EXPECT_LT(test->evaluate(), 100);
}

#endif 