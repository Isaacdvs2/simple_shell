#include "main.h"

/**
 * main - this is the entry point of a c function.
 * @argc - args count argument.
 * @argv - pointer to array of args.
 *
 * Description: Thi is the main function that executes the shell program.
 * This function contains the REPL loop where  inputs are read and evaluated,
 * and then the results are returned to the user. REPL's provide an interactive
 * environment.
 */

int main(int argc, int **argv)
{
	char *cmd;

	do
	{
		printprompt1();
		cmd = read_cmd();

		if (!cmd)
		{
			exit(EXIT_SUCCESS);
		}

		if (cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}

		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		printf("%s\n", cmd);
		free(cmd);
	} while(1);
exit(EXIT_SUCCESS);
}
