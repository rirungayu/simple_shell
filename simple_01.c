#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - runs a command from stdin
* Return: zero
**/

int main(int argc, char **argv)
{
	char path[] = "/usr/bin/ls";
	char *arg[] = {"ls", "-l", NULL};
	char *env[] = {NULL};
	char *command;
	char *buffer = malloc(1024);
	size_t len = 1024;

	(void) argc;
	(void) argv;
	printf("getline$ ");
	getline(&buffer, &len, stdin);
	command = strcat(path, buffer);
	printf("%s", command);
	execve(path, arg, env);
	return(0);
}

