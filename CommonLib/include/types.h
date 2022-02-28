#include <iostream>

#ifndef _TYPE
#define _TYPE
class Integer
{
public:
	Integer(int x = 0)
	: val(x){}
	// Arithmetics
	Integer operator+(const Integer &other);
	Integer operator-(const Integer &other);
	Integer operator*(const Integer &other);
	Integer operator/(const Integer &other);
	friend bool operator==(const Integer &x, const Integer &other);
	friend std::ostream &operator<<(std::ostream& os, const Integer& x);
private:
	  int val;
};
#endif
