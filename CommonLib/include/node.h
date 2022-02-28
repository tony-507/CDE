#ifndef _NODE
#define _NODE
template<class T>
class SimpleNode
{
public:
	SimpleNode(T x)
	: val(x)
	, next(0){}
	T getValue()
	{
		return val;
	}
	SimpleNode<T> *next;
private:
	T val;
};
#endif
