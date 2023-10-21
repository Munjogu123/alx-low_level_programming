#include "main.h"

/**
 * reverse_array - reverses contents of an array
 * @a: array of elements
 * @n: no of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
