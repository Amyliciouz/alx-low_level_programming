#include "./search_algos.h"

/**
 * binary_search - binary search function
 * print_array - function that prints the array
 * @array: integer array input parameter
 * @size: size of the array
 * @value: integer search parameter
 * Return: i for success
 * -1 for failure
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = (size - 1);

	while (start <= end)
	{
	int mid = ((start + end) / 2);

	int i = start;

	printf("Searching in array: ");
	while (i < end)
	{
	printf("%d, ", array[i]);
	i++;
	}
	printf("%d\n", array[i]);
	if (array[mid] == value)
	{
	return (mid);
	}
	else if (array[mid] < value)
	{
	start = (mid + 1);
	else
	{
	end = (mid - 1);
	}
	}
	return (-1);
}
}
