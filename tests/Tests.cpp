//
// Created by paulkokos on 24/1/2019.
//

#include "../lib/library.cpp"
#include <gtest/gtest.h>

TEST(HelloTest, PositiveNos) {
    ASSERT_EQ(6, hello(36.0));
    ASSERT_EQ(18.0, hello(324.0));
    ASSERT_EQ(25.4, hello(645.16));
    ASSERT_EQ(0, hello(0.0));
}

TEST(HelloTest, NegativeNos) {
    ASSERT_EQ(-1.0, hello(-15.0));
    ASSERT_EQ(-1.0, hello(-0.2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}