#include <stdio.h>

#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments to be passed
 * @argv: array pointer holding the arguments passed
 *
 * Description: the program should print a number followed by a new line
 *
 * Return: Always return 0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, j;

	while (i < argc)
	{
		j = i;
		i ++;
	}
	printf("%d\n", j);

	return (0);
}
