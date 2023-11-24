#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: int to be searched
 * @index: index to search for bit
 *
 * Return: value of a bit at index. Otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
