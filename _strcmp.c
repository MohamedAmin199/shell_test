#include "shell.h"
/**
 * _strcmp - A function that compares two strings.
 * @str1: The first string.
 * @str2: The second string.
 * Return: 0 if both strings are equal,
 * or -1 if str1 is shorter than str2,
 * or 1 if str1 is longer than str2.
 */
int _strcmp(const char* str1, const char* str2)
{
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] < str2[i])
		{
			return (-1);
		}
		else if (str1[i] > str2[i])
		{
			return (1);
		}
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
	{
		return (0);
	}
	else if (str1[i] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
