#include <google/gtest/gtest.h>
#include "../../../../implementations/onblocks/utils/Math.h"

#include <limits>

using namespace blobstore::onblocks::utils;
using ::testing::Test;
using std::numeric_limits;

class CeilLogTest: public Test {};

TEST_F(CeilLogTest, Log3_0) {
 EXPECT_EQ(0, ceilLog(3, 0));
}

TEST_F(CeilLogTest, Log3_1) {
 EXPECT_EQ(0, ceilLog(3, 1));
}

TEST_F(CeilLogTest, Log3_2) {
 EXPECT_EQ(1, ceilLog(3, 2));
}

TEST_F(CeilLogTest, Log3_3) {
 EXPECT_EQ(1, ceilLog(3, 3));
}

TEST_F(CeilLogTest, Log3_4) {
 EXPECT_EQ(2, ceilLog(3, 4));
}

//TODO ...
