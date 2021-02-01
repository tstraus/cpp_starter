#include "greeter.h"

#include "gtest/gtest.h"

#define TEST_NAME "Margot"

TEST(GreeterLibTests, Greet)
{
    auto* g = greeter_new();
    ASSERT_NE(g, nullptr);

    EXPECT_GT(greeter_greet(g, TEST_NAME), 0);

    auto* gc = g;
    greeter_free(g);
    ASSERT_EQ(g, gc);
}

TEST(GreeterLibTests, Length)
{
    auto* g = greeter_new();

    const auto length = greeter_greet(g, TEST_NAME);
    EXPECT_EQ(length, 6);

    greeter_free(g);
}

TEST(GreeterLibTests, Count)
{
    auto* g = greeter_new();

    ASSERT_EQ(greeter_total_greeted(g), 0);

    greeter_greet(g, "one");
    ASSERT_EQ(greeter_total_greeted(g), 1);

    greeter_greet(g, "two");
    ASSERT_EQ(greeter_total_greeted(g), 2);

    greeter_greet(g, "three");
    ASSERT_EQ(greeter_total_greeted(g), 3);
}
