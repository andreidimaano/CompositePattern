#ifndef __Add_TEST_HPP__
#define __Add_TEST_HPP__

#include "gtest/gtest.h"

#include "Add.hpp"
#include "op.hpp"

//2 non zero values
TEST(AddTest, AddEvaluateNonZero) {
    Op* left = new Op(10.0);
    Op* right = new Op(20.0);
    Add* test = new Add(left, right);
    EXPECT_DOUBLE_EQ(test->evaluate(), 30.0);
}

TEST(AddTest, AddEvaluateNonZeroString) {
    Op* left = new Op(10.0);
    Op* right = new Op(20.0);
    Add* test = new Add(left, right);
    std::string str = "10.000000 + 20.000000";
    EXPECT_EQ(test->stringify(), str);
}

//1 pos, 1 neg
TEST(AddTest, AddEvaluateNonZero) {
    Op* left = new Op(-10.0);
    Op* right = new Op(20.0);
    Add* test = new Add(left, right);
    EXPECT_DOUBLE_EQ(test->evaluate(), 10.0);
}

TEST(AddTest, AddEvaluateNonZeroString) {
    Op* left = new Op(10.0);
    Op* right = new Op(20.0);
    Add* test = new Add(left, right);
    std::string str = "-10.000000 + 20.000000";
    EXPECT_EQ(test->stringify(), str);
}


#endif //__Add_TEST_HPP__
