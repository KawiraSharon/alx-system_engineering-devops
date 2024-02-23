#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

/**
 * InfiniteWhile - Run an infinite while loop
 * Return: NULL
 */
int InfiniteWhile(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creation of zombie processes; 5
 * Return: NULL
 */
int main(void)
{
	pid_t ProcessID;
	char i = 0;

	while (i < 5)
	{
		ProcessID = fork();
		if (ProcessID > 0)
		{
			printf("Zombie process created, PID: %d\n", ProcessID);
			sleep(1);
			i++;
		}
		else
			exit(0);
	}

	InfiniteWhile();

	return (EXIT_SUCCESS);
}
