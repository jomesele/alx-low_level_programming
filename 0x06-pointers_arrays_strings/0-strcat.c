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
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
