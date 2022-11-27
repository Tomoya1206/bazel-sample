#include "sample.hpp"
#include <gtest/gtest.h>

#include <cstdint>

// TEST(Lib1, lib1)
// {
//     ASSERT_EQ(0, foo(-1,1));
//     ASSERT_EQ(1, foo(1,1));
//     ASSERT_EQ(0, foo(1,-1));
// }

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect equality.
  // EXPECT_EQ(10, sum(7, 3));
  // EXPECT_EQ(11, function(4, 3, 11));
  // EXPECT_EQ(20, function(11, 9, 8));
  // EXPECT_EQ(20, function(9, 11, 8));
  // EXPECT_EQ(13, function(10, 11, 13));
  EXPECT_EQ(11, function(11, 11));
  EXPECT_EQ(81, function(9, 9));
}

