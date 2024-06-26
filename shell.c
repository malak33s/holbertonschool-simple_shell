#include "shell.h"

/**
 * procommand - excuting command enter by user.
 *@command: command enter by user
 * Return: Always 0
 */

int procommand(char *command)
{
	char *args[2];
	char *token = strtok(command, " \n");
	pid_t pid = fork();



	if (pid < 0)
	{
		fprintf(stderr, "error \n");
		return (1);
	}
	else if (pid == 0)
	{
		args[0] = token;
		args[1] = NULL;

		if (execve(args[0], args, environ) == -1)
		{
			fprintf(stderr, " error\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;

		if (waitpid(pid, &status, 0) == -1)
		{
			fprintf(stderr, "Error: waitpid failed\n");
			return (1);
		}
	}
	return (0);
}
