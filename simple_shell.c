#include "shell.h"
/*
 * prgpcommand - excuting command enter by user.
 *
 */

void disprompt()
{
	printf("$ ");
	fflush(stdout);
}

void procommand(char *command)
{
	char *args[] = { command, NULL };

	pid_t pid = fork();
	
	if (pid < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(command, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("waitpid");
			exit(EXIT_FAILURE);
		}
	}
}
