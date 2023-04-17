#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the name of the file
 *		it was compilled from,
 *		followed by a new line
 * Return: always return 0
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
