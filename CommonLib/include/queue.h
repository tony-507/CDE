#include "node.h"

#ifndef _QUEUE
#define _QUEUE
template <class T>
class Queue
{
public:
	Queue()
	: start(0)
	, end(0)
	, size(0){}
	~Queue(){}
	void enqueue(T val)
	{
		SimpleNode<T> *tmp = new SimpleNode<T>(val);
		if (size==0)
		{
			start = end = tmp;
			start->next = end;
			size++;
			return;
		}
		end->next = tmp;
		end = end->next;
		size++;
	}
	T dequeue()
	{
		if (size==0)
			return 0;
		SimpleNode<T> *tmp = start;
		T val = tmp->getValue();
		start = start->next;
		delete tmp;
		size--;
		return val;
	}
	int length() { return size; }
private:
	int size;
	SimpleNode<T> *start;
	SimpleNode<T> *end;
};
#endif
