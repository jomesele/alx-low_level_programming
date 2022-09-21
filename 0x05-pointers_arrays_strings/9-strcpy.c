#include "pro.h"

/**
 * _strcpy - Copies a string pointed by @scr
 * @dest: A buffer to copy the string to
 * @src: The source string to copy
 *
 * Return: A pointer to the destination string dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}