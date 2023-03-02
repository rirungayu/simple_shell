#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - runs a command from stdin
* Return: zero
**/

int main(int argc, char **argv)
{
	char command[] = "/usr/bin/ls";
	char *arg[] = {"cd",NULL};
	char *env[] = {NULL};
	char *buffer = malloc(1024);
	size_t len = 1024;

	(void) argc;
	(void) argv;
	printf("getline$ ");
	getline(&buffer, &len, stdin);
	printf("%s", strcat(command, buffer));
	execve(command, arg, env);

	return(0);
}

