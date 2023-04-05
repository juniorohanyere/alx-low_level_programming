#include "main.h"

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n: input number
 * @i: iterator
 *
 * Return: square root of @n or -1
*/

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function to return the natural
 *			square root of a number
 *
 * @n: number to be checked
 *
 * Return: return -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
