#include "shell.h"
/**
 * _strlen - A function that calculates the length of string.
 * @str: The string.
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
