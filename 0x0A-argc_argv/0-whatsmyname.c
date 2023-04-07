#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main - a program that prints its name
 * @argc: the number of command line arguments to use
 * @argv: the array pointer that holds the arguments passed
 *
 * Description: if the proram is renamed
 *		it will print the new name
 *		without having to compile it again
 *
 * Return: Always return 0
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	i = 0;
	printf("%s\n", argv[i]);
	return (0);
}
