#include "search_algos.h"

/**
 * linear_search - linear search algortihm
 * @array: pointer to the first element of the array to search in
 * @size: no of elements in the array
 * @value: value to search for
 *
 * Return: return index of value found. Otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
