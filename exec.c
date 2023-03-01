#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - executes a program
 * Return: zero
 **/

int main(void)
{
	char *arg[] = {"/bin/ls", "-l", "/usr/", NULL};

	if (execve(arg[0],arg, NULL) == -1)
		perror("error");

	return(0);
}
