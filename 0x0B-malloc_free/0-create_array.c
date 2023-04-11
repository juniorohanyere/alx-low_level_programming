#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *		  and initializes it with a specific char
 *
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: return a null value or an array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
