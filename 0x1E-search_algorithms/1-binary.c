#include "search_algos.h"
/**
 * binary_search - Binary search algo
 * @array: pointer to 1st elem
 * @size: number of elem
 * @value: value to search
 * Return:  where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0;
	size_t right = size - 1;
	size_t med;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		med = (left + right) / 2;
		i = left;
		printf("Searching in array: ");

		for (; i <= right; i++)
		{
			if (i != left)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[med] < value)
			left = med + 1;
		else if (array[med] > value)
			right = med - 1;
		else
			return (med);
	}
	return (-1);
}

