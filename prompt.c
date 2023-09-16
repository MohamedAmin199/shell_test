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


/**
 * cmd_read - A function that takes parameters from user.
 * @cmd: A pointer to a character buffer to store the user's input.
 * @n: The initial size of the character buffer.
 * @value: A variable to store the result.
 * Return: Access to the read and processed line of text.
 */

char* cmd_read(char* cmd, size_t n, ssize_t value)
{
	cmd = NULL;
	n = 0;
	value = getline(&cmd, &n, stdin);

	if (value == -1)
	{
		free(cmd);
		perror("readline");
		exit(EXIT_FAILURE);
	}
	else
	{
		size_t i = 0;
		while (cmd[i])
		{
			if (cmd[i] == '\n')
			{
				cmd[i] = '\0';
			}
			i++;
		}
	}
	return (cmd);
}


/**
 * split_cmd - A function that splits a given command string into individual tokens.
 * @cmd: A pointer to a character buffer to store the user's input.
 * @n: The initial size of the character buffer.
 * Return: The array of tokens.
 */

char** split_cmd(char* cmd, size_t n)
{
	char* line, *line_copy, *token, **tokens;
	char* delim = " \n";
	ssize_t value = 0;
	int num_tokens = 0, i = 0;

	line = cmd_read(cmd, n, value);
	line_copy = malloc((_strlen(line) + 1) * sizeof(char));
	line_copy = _strcpy(line_copy, line);
	token = strtok(line_copy, delim);

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
		tokens = malloc((num_tokens + 1) * sizeof(char*));
		if (tokens == NULL)
		{
			perror("allocation error\n");
			exit(EXIT_FAILURE);
		}
		token = strtok(line_copy, delim);
		while (token != NULL)
		{
			tokens[i] = malloc((_strlen(token) + 1) * sizeof(char));
			_strcpy(tokens[i], token);
			i++;
			token = strtok(NULL, delim);
		}
		tokens[i] = NULL;
		free(line);
		free(line_copy);
		return (tokens);
}
