#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-1);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(OpTest, OpEvaluatePositiveDouble) {
    Op* test = new Op(1.1);
    EXPECT_DOUBLE_EQ(test->evaluate(), 1.1);
}

TEST(OpTest, OpEvaluateZeroDouble) {
    Op* test = new Op(0.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, OpEvaluateNegativeDouble) {
    Op* test = new Op(-0.1);
    EXPECT_DOUBLE_EQ(test->evaluate(), -0.1);
}



#endif //__OP_TEST_HPP__
