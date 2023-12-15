#include "main.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: if endian 1 otherwise 0.
 */
int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
