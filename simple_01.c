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

	(void) argc;
	(void) argv;	
	execve(command, arg, env);
	return(0);
}

