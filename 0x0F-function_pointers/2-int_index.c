#include <stddef.h>

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of the @array
 * @cmp: pointer to function call
 *
 * Description: the @cmp checks index array if it matches
 *
 * Return: return 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			y = cmp(array[i]);
			if (y == TRUE)
				return (i);
		}
	}
	return (-1);
}
