#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * strtok - splits string into words
 * Return: zero
 **/

int strtok(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;

	while (1)
	{
		printf("$");
		getline(&buffer, &len, stdin);

		token = strtok(buffer, " ");
		while (token)
		{
			printf("%s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}
