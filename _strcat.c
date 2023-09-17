#include "shell.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the concatenated string.
 */

char *_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
