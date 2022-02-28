#include "../include/types.h"

Integer Integer::operator+(const Integer &x2)
{
	Integer res;
	res.val = this->val + x2.val;
	return res;
}

Integer Integer::operator-(const Integer &other)
{
	Integer res(this->val-other.val);
	return res;
}

Integer Integer::operator*(const Integer &other)
{
	Integer res(this->val*other.val);
	return res;
}

Integer Integer::operator/(const Integer &other)
{
	Integer res(this->val/other.val);
	return res;
}

bool operator==(const Integer &x, const Integer &other)
{
	return x.val==other.val;
}

std::ostream& operator<<(std::ostream& os, const Integer& x)
{
	os << x.val;
	return os;
}
