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
	char *env[] = {NULL};

	(void) argc;
	(void) argv;
	
	if(execve(argv[1], argv, env) == -1)
	{
		perror("error!");
	}
	
	return(0);
}

