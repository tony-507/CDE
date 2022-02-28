#include "node.h"

#ifndef _STACK
#define _STACK
template <class T>
class Stack
{
public:
	Stack()
	: start(0)
	, end(0)
	, size(0){}
	~Stack(){}
	void push(T val)
	{
		SimpleNode<T> *tmp = new SimpleNode<T>(val);
		if (size==0)
		{
			start = end = tmp;
			start->next = end;
			end->next = start;
			size++;
			return;
		}
		start->next = tmp;
		tmp->next = end;
		end = tmp;
		size++;
	}
	T pop()
	{
		if (size==0)
			return 0;
		SimpleNode<T> *tmp = end;
		T x = tmp->getValue();
		start->next = end->next;
		end = end->next;
		delete tmp;
		size--;
		return x;
	}
	int length() { return size; }
private:
	SimpleNode<T> *start;
	SimpleNode<T> *end;
	int size;
};
#endif
