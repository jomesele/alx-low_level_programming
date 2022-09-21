#include "main.h"

/**
 * _strcat - appends src to the dest strng
 * @dest: string to appended by  src
 * @src: string to be append to dest
 *
 * Return: address of dest 
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[indrex]; index++)
		dest[len++] = src[index];

	return (dest);
}

