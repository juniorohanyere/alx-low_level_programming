#include "main.h"

/**
 * intlen - function to find the length of an unsigned long integer
 *
 * @n: the unsigned long integer to find its length
 *
 * Return: return the length calculated
*/

int intlen(unsigned long int n)
{
	int l = 0;

	while (n > 0)
	{
		l++;
		n >>= 1;
	}
	l--;

	return (l);
}

/**
 * print_binary - function that prints the binary representation
 *		  of a number
 *
 * @n: the number to represent in binary
 *
 * Return: return nothing
*/

void print_binary(unsigned long int n)
{
	int l;
	unsigned long int m = 1;

	l = intlen(n);

	if (l > 0)
		m <<= l;

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');

		m >>= 1;
	}
}
