#include "main.h"

/**
 * _strncat - concatenate two strings using no of bytes from src
 * @dest: string to be appended on
 * @src: strnig to be appended on dest
 * @n: number of bytes from src
 *
 * Return: pointer to the destination array
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}


	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
