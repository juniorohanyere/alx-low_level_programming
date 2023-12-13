#include <stdio.h>

#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 *			  of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 *
 * Return: return the first index where @value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL)
		return (-1);

	for (i = 0, j = size - 1; j >= i;)
	{
		k = i + (((double)(j - i) / (array[j] - array[i])) *
			(value - array[i]));
		if (k < size)
		{
			printf("Value checked array[%ld] = [%d]\n", k,
				array[k]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n",
				k);

			break;
		}

		if (array[k] == value)
			return (k);

		else if (array[k] > value)
			j = k - 1;
		else
			i = k + 1;
	}

	return (-1);
}
