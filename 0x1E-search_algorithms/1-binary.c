#include <stdio.h>

#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 *		   integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: return the index where @value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, j, k, l;

	i = 0;
	j = size - 1;

	if (array == NULL)
		return (-1);

	if (size == 1)
		return (array[i]);

	while (j >= i)
	{
		if (j == 0 && k == 0)
			return (-1);

		printf("Searching in array: ");
		for (l = i; l < j; l++)
			printf("%d, ", array[l]);
		printf("%d\n", array[j]);

		k = (i + j) / 2;
		if (array[k] == value)
			return (array[k]);

		else if (array[k] < value)
			i = k + 1;
		else if (array[k] > value)
			j = k;
	}

	return (-1);
}
