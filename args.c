#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints no of arguments
 * Return: zero
 **/

int main(int ac, char** av)
{
	int counter = 0;

	while(av)
	{
		printf("%s", av[counter]);
		counter += 1;
	}

	printf("\n");
	return (0);
}

