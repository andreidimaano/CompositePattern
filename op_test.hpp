#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

//non zero
TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNonZeroString) {
    Op* test = new Op(8);
    std::string str = "8.000000";
    EXPECT_EQ(test->stringify(),str);
}

//zero
TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateZeroString) {
    Op* test = new Op(0);
    std::string str = "0.000000";
    EXPECT_EQ(test->stringify(),str);
}

//negative
TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-1);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(OpTest, OpEvaluateNegativeString) {
    Op* test = new Op(-1);
    std::string str = "-1.000000";
    EXPECT_EQ(test->stringify(),str);
}

//positive double
TEST(OpTest, OpEvaluatePositiveDouble) {
    Op* test = new Op(1.1);
    EXPECT_DOUBLE_EQ(test->evaluate(), 1.1);
}

TEST(OpTest, OpEvaluatePositiveDoubleString) {
    Op* test = new Op(1.1);
    std::string str = "1.100000";
    EXPECT_EQ(test->stringify(),str);
}


//zero double
TEST(OpTest, OpEvaluateZeroDouble) {
    Op* test = new Op(0.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, OpEvaluateZeroDoubleString) {
    Op* test = new Op(0.0);
    std::string str = "0.000000";
    EXPECT_EQ(test->stringify(), str);
}

//negative double
TEST(OpTest, OpEvaluateNegativeDouble) {
    Op* test = new Op(-0.1);
    EXPECT_DOUBLE_EQ(test->evaluate(), -0.1);
}
TEST(OpTest, OpEvaluateNegativeDoubleString) {
    Op* test = new Op(-0.1);
    std::string str = "-0.100000";
    EXPECT_EQ(test->stringify(),str);
}


#endif //__OP_TEST_HPP__
