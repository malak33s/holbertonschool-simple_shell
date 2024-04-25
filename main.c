#include "shell.h"

/**
 * main - shell program initializes to enters and read command from the user
 *
 * Return: Always 0
 */

int main(void)
{
	char *command = NULL;
	size_t bufsize = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			prompt();
		}

		if (getline(&command, &bufsize, stdin) == -1)
		{
			break;
		}

		if (strlen(command) > 0)
		{
			if (procommand(command) == -1)
			{
				fprintf(stderr, "error command: %s\n", command);
			}
		}
	}

	free(command);
	return (0);
}
