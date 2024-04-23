#include "shell.h"
/**
 *
 *
 *
 */

int main()
{
	char command[];

	while (1)
	{
		prompt();

		if (fgets(command), stdin) == NULL)
		{
			printf("\n");
			break;
		}
		command[strcspn(command, "\n")] = '\0';
		
		if (strlen(command) > 0)
		{
			prgpcommand(command);
		}
	}

	return 0;
}
