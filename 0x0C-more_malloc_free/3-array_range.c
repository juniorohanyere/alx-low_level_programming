#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum number of elements
 * @max: maximum number of elements
 *
 * Return: return a null value
 *	   or the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array = NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
