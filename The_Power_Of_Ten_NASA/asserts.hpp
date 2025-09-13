#ifndef ASSERTS_HPP
#define ASSERTS_HPP
#include <cassert>

inline int divide(int x, int y) 
{
	assert(x != 0);
	assert(y != 0);
	return x / y;
}


#endif