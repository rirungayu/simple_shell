#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the command that was input
 * Return: zero
 **/

int main(int argc, char **argv)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while(1)
	{
	printf("$");
	getline(&buffer,&len, stdin);
	printf("%s", buffer);
	}
	
	return (0);
}
