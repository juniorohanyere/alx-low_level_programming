#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments passed
 * @argv: array pointer containing the arguments passed
 *
 * Description: prints all arguments including the first one
 *		printing only one argument per line,
 *		ending with a new line
 *
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
