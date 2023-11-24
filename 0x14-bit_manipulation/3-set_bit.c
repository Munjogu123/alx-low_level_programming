#include "main.h"

/**
 * set_bit - sets val of bit to 1
 * @n: value of num
 * @index: place to set val of bit to 1
 *
 * Return: 1 if success. Otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
