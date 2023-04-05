#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check its length
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * checker - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
*/

int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}

/**
 * is_palindrome - function to check
 *		   if a string is palindrome
 * @s: string to check
 *
 * Return: return 1 if pilandrome, otherwise return 0
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, _strlen(s)));
}
