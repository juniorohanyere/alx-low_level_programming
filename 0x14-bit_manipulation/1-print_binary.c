#include "main.h"

/**
 * get_len - function that gets the length of a number
 *
 * @num: the number which to get the length from
 *
 * Return: return the length of the number
*/

int get_len(unsigned long int num)
{
	int length = 0;

	while (num > 0)
	{
		length++;
		num >>= 1;
	}
	length--;
	return (length);
}

/**
 * print_binary - function that prints the binary representation
 *		  of a number
 * @n: the number to print its binary representation
 *
 * Return: return nothing
*/

void print_binary(unsigned long int n)
{
	int length;
	unsigned long int rep;

	length = get_len(n);
	rep = 1;
	if (length > 0)
		rep <<= length;
	while (rep > 0)
	{
		if (n & rep)
			_putchar('1');
		else
			_putchar('0');
		rep >>= 1;
	}
}
