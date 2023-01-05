#include "search_algos.h"

/**
 *  linear_search - linear search function
 *  @array: pointer to integer array parameter
 *  @size: size of the array parameter
 *  @value: integer search parameter to be
 *  Return: i (index of value) for success
 * -1 if for failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
	return (i);
	}
	}
	return (-1);
}
