#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @x: number to be checked
 * int new_no - stores the absolute value of x if negative
 *
 * Return: if r is positive return r
 * Otherwise multiply r by -2 and add it to r
 */
int _abs(int x)
{
	int new_no;

	if (x < 0)
	{
		new_no = x + (x * -2);
		return (new_no);
	}

	return (x);
}
