#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * getline - prints the command that was input
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero
 **/

int getline(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
	printf("getline$ ");
	getline(&buffer, &len, stdin);
	printf("%s", buffer);
	}

	return (0);
}
