#include "stdio.h"

#include "main.h"

/**
 * _strlen - function that calculates the length of a string
 *
 * @str: string to calculate its length
 *
 * Return: return the length of the string
*/

unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	return (i);
}

/**
 * char_to_int - converts a char to an integer
 *
 * @c: char to be converted to int
 *
 * Return: return the converted char (integer)
*/

unsigned int char_to_int(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * binary_to_uint - function  that converts a binary number
 *		    to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: return the converted number of chars
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int count = 0, j = 1, n = 0;

	if (b == NULL)
		return (0);

	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		n = char_to_int(b[i]);

		if (n != 0 && n != 1)
			return (0);
		count += n * j;
		j *= 2;
	}

	return (count);
}
