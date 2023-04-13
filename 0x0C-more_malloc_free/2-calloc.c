#include <stdlib.h>
#include "main.h"

/**
 * _memset - function to fill memory with a constant byte
 *
 * @s: input pointer that represents memory block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: return a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - a function that allocates memory for an array using malloc
 *
 * @nmemb: array size
 * @size: size of each element
 *
 * Return: return a pointer to the allocated memoy
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULLL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
