#include "../include/types.h"
#include "../include/queue.h"
#include <gtest/gtest.h>

TEST(QueueTest, QueueOps)
{
	Integer buf[] = {2,-1,10};
	Queue<Integer> *L = new Queue<Integer>;
	for (Integer x: buf)
	{
		L->enqueue(x);
	}
	for (Integer x: buf)
	{
		EXPECT_PRED2([](Integer x, Integer y){ return x==y; }, x, L->dequeue());
	}
	delete L;
}
