#include "shell.h"
/**
 * main - The main function of the simple shell.
 * Return: 0
 */

int main(void)
{
	char *cmd = NULL, **tokens = NULL;
	size_t n = 0;

	while (1)
	{
		display_prompt();
		tokens = split_cmd(cmd, n);
		execute_cmd(tokens);
	}
	free_tokens(tokens);
		free(cmd);
		return (0);
}
