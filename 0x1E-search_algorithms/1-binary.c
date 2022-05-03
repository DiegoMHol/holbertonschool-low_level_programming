#include "search_algos.h"
/**
 * printFunc - Print array
 * @array: pointer to 1st elem
 * @size: number of elem
 */
void printFunc(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - Binary search algo
 * @array: pointer to 1st elem
 * @size: number of elem
 * @value: value to search
 * Return:  where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t med;

	if (array == NULL)
		return (-1);

	printFunc(array, size);
	while (left <= right)
	{
		med = (left + right) / 2;
		if (value > array[med])
		{
			left = med + 1;
			if (right >= 1)
				printFunc(array + left ,right + 1 - left);
		}
		else if (value < array[med])
		{
			right = med - 1;
			if (right >= 1)
				printFunc(array + left, right + 1 - left);
		}
		else
			return (med);
	}
	return (-1);
}

