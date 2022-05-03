#include "search_algos.h"
/**
 * linear_search - Linear search algo
 * @array: pointer to 1st elem
 * @size: number of elem
 * @value: value to search
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
