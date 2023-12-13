#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of
 *		 integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: return the first index where @value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL || size == 0)
		return (-1);

	k = sqrt(size);
	j = 0;

	for (i = 0; j < size && array[j] < value;)
	{
		printf("Value check array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += k;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);
	if (j >= size)
		j = size - 1;

	while (i < j && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);

	return (-1);
}
