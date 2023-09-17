#include "shell.h"
/**
 * _strcpy - Copies a source string into a destination string.
 * @cpy: The destination string.
 * @orignal: The source string.
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *cpy, const char *orignal)
{
	int i = 0;
	char *cpy_ptr = cpy;
	const char *orignal_ptr = orignal;

	while ((*cpy_ptr++ = *orignal_ptr++) != '\0')
	{
		cpy[i] = orignal[i];
		i++;
	}
	return (cpy);
}
