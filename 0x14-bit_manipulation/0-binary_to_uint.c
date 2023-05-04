#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * get_length - function to get the length of a string
 *
 * @str: the string from which to get the length
 *
 * Return: return the length of the string
*/

unsigned int get_length(const char *str)
{
	unsigned int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * convert_to_int - function that converts a char to an integer
 *
 * @c: the char to be converted
 *
 * Return: return the converted char
*/

unsigned int convert_to_int(char c)
{
	unsigned int n;

	n = ((unsigned int) c - '0');
	return (n);
}

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: return the converted number
 *	   return 0 if there is one or more chars in the string b
 *	   that is not 0 or 1, and if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int i, l;
	unsigned int n, binary, num;

	n = 0;
	binary = 1;
	num = 0;
	l = get_length(b) - 1;
	if (b == NULL)
		return (0);
	for (i = l; i >= 0; i--)
	{
		num = convert_to_int(b[i]);
		if (num != 0 && num != 1)
			return (0);
		n += num * binary;
		binary *= 2;
	}
	return (n);
}
