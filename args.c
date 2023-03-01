#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * args - prints no of arguments
 * @av: array of args
 * @ac: number of args
 * Return: zero
 **/

int args(int ac, char **av)
{
	int counter = 0;

	(void)ac;

	while (av)
	{
		printf("%s", av[counter]);
		counter += 1;
	}

	printf("\n");

	if (feof(stdin))
		return(0);
	return (0);
}

