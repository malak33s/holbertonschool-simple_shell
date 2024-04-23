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
		disprompt();

		if (getline(&command, &bufsize, stdin) == -1)
		{
			printf("\n");
			break;
		}
		
		command[strcspn(command, "\n")] = '\0';
		
		if (strlen(command) > 0)
		{
			procommand(command);
		}
	}
	free(command);
	return 0;
}
