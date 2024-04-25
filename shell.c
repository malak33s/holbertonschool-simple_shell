#include "shell.h"
/*
 * procommand - excuting command enter by user.
 *
 */

int procommand(char *command)
{
	char *args[2];
	char *token = strtok(command, " \n");
	pid_t pid = fork();
	args[0] = token;
	args[1] = NULL;
	
	if (pid < 0)
	{
		perror("fork");
		return -1;
	}
	else if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("waitpid");
			return -1;
		}
	}
	return 0;
}
