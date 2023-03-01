#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main -get the pid
 * Return: zero
 **/

int main(void)
{
	pid_t cur_pid;
	
	cur_pid = getpid();
	printf("%u\n", cur_pid);
	return (0);
}
