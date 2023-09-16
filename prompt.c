#include "shell.h"
/**
 * display_prompt - A function that displays a prompt for user.
 */

void display_prompt(void)
{
	ssize_t value = 0;

	if (isatty(STDIN_FILENO))
	{
		value = write(STDOUT_FILENO, "$ ", 2);
		if (value == -1)
		{
			perror("write");
			exit(EXIT_FAILURE);
		}
}
