#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints no of arguments
 * @av - array of args
 * Return: zero
 **/

int main(int ac, char **av)
{
	int counter = 0;
	
	while (counter < ac)
	{
		printf("%s", av[counter]);
		counter += 1;
	}

	printf("\n");
	
	if(feof(stdin))
		fclose(stdin);
	return (0);
}

