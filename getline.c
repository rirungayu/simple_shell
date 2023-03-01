#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the command that was input
 * Return: zero
 **/

int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (!feof(stdin))
	{
	printf("$");
	getline(&buffer, &len, stdin);
	printf("%s", buffer);
	}

	   
	return (0);
}
