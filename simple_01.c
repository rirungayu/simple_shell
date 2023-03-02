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
	char *arg[] = {"ls", "-l", NULL};
	char *env[] = {NULL};
	char *buffer = malloc(1024);
	size_t len = 1024;

	(void) argc;
	(void) argv;
	printf("getline$ ");
	getline(&buffer, &len, stdin);
	printf("%s", buffer);
	
	if(execve(buffer, arg, env) == -1)
	{
		perror("error!");
	}
	
	return(0);
}

