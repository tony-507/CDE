#include "../../CommonLib/include/Utils.hpp"
#include <gtest/gtest.h>

TEST(UtilTest, WordSegmentationTest)
{
	unsigned char arr[] = {(unsigned char)(163), (unsigned char)(15), (unsigned char)(0)};
	unsigned char *buf = arr;
	BitReader reader(buf);
	EXPECT_EQ(reader.getWord(4), 10);
	EXPECT_EQ(reader.getWord(5), 6);
	EXPECT_EQ(reader.getWord(3), 0);
	EXPECT_EQ(reader.getWord(4), 15);
}

TEST(UtilTest, LinMapTest)
{
	unsigned char arr[] = {(unsigned char)(10), (unsigned char)(8), (unsigned char)(0)};
	unsigned char *buf = arr;
	myMath::linMap(buf, 1.1, 5);
	EXPECT_EQ((int)(*buf++), 16);
	EXPECT_EQ((int)(*buf), 13);
}
