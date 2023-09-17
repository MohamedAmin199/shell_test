#include "shell.h"
/**
 * _strchr - Searchs for the first occurrence of a character.
 * @str: The string.
 * @ch: The character.
 * Return: A pointer.
 */
char *_strchr(const char *str, int ch)
{
	char *ptr = NULL;

	while (*str != '\0')
	{
		if (*str == ch)
		{
			ptr = (char *)str;
			break;
		}
		str++;
	}
	return (ptr);
}
