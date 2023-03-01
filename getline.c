#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the command that was input
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero
 **/

int main(int argc, char **argv )
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	(void)argc;
	while (!feof(stdin))
	{
	printf("$");
	getline(&buffer, &len, stdin);
	execve(argv[0], argv, NULL);
	printf("%s", buffer);
	}

	   
	return (0);
}
