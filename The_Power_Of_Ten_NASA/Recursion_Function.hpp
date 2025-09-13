#ifndef RECURSION_HPP
#define RECURSION_HPP

inline int add(int x) {
	if (x == 0)
	{
		return 0;
	}
	return (add(x) - 1);
}

#endif