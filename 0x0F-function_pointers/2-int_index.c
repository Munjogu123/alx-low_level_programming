#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: function that compares integers
 * Return: return index of compared value
 * Otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array != NULL && cmp != NULL)
		{
			cmp(array[i]);
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
