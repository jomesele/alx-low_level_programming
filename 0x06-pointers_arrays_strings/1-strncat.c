#include "main.h"

/**
 * _strncat - concatenate two strings using no of bytes from src
 * @dest: string to be appended on
 * @src: strnig to be appended on dest
 * @n: number of bytes from src
 *
 * Return: pointer to the destination array
 */
char *strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
