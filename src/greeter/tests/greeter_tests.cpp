#include "greeter.hpp"

#include "gtest/gtest.h"

using greeter::Greeter;

#define TEST_NAME "Margot"

TEST(GreeterTests, Greet)
{
    Greeter g;

    ASSERT_NO_THROW(g.greet(TEST_NAME));
}

TEST(GreeterTests, Length)
{
    Greeter g;

    const auto length = g.greet(TEST_NAME);
    EXPECT_EQ(length, 6);
}

TEST(GreeterTests, Count)
{
    Greeter g;

    ASSERT_EQ(g.totalGreeted(), 0);

    g.greet("one");
    ASSERT_EQ(g.totalGreeted(), 1);

    g.greet("two");
    ASSERT_EQ(g.totalGreeted(), 2);

    g.greet("three");
    ASSERT_EQ(g.totalGreeted(), 3);
}
