#include "../include/types.h"
#include "../include/stack.h"
#include <gtest/gtest.h>

TEST(StackTest, StackOps)
{
	Integer buf[] = {2,-1,10};
	Stack<Integer> *L = new Stack<Integer>;
	for (Integer x: buf)
	{
		L->push(x);
	}
	for (int i = 0; i < 3; i++)
	{
		EXPECT_PRED2([](Integer x, Integer y){ return x==y; }, buf[2-i], L->pop());
	}
	delete L;
}
