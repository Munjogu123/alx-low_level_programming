#include "main.h"

/**
 * clear_bit - sets val of bit to 0
 * @n: val of num
 * @index: position to set bit to 0
 *
 * Return: 1 if success. Otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
