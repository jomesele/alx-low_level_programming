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
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++;
	}
	*p = '\0';

	return (dest);
}
