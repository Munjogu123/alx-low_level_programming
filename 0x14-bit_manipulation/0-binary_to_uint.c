#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to string
 *
 * Return: converted number. Otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len = strlen(b);
	int sum = 0;
	int val = 1;

	if (!b)
		return (0);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			sum += val;
		val *= 2;
	}
	return (sum);
}
