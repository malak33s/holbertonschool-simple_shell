#include "shell.h"
/**
 *
 *
 *
 */

int main()
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
			printf("\n");
			break;
		}
		
		command[strcspn(command, "\n")] = '\0';
		
		if (strlen(command) > 0)
		{
			if (procommand(command) == -1)
			{
				fprintf(stderr, "error command: %s\n", command);
			}
		}
	}
	
	free(command);
	return 0;
}
