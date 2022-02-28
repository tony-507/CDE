#include "../include/types.h"
#include <gtest/gtest.h>

TEST(TypeTest, IntegerTest)
{
	Integer x = 2;
	Integer y = 4;
	auto cmp = [](Integer x, Integer y){ return x==y;};
	EXPECT_PRED2(cmp, x+x, y);
	EXPECT_PRED2(cmp, y-x, x);
	EXPECT_PRED2(cmp, x*x, y);
	EXPECT_PRED2(cmp, y/x, x);
}
