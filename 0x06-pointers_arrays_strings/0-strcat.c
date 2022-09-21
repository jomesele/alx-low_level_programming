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
	int lengthd = 0;
	int lengths = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char tmp[10];

	while (dest[i] != '\0')
	{
		lengthd++;
		i++;
	}
	while (src[k] != '\0')
	{
		tmp[lengths] = src[k];
		lengths++;
		k++;
	}
	for (; j < lengths - 1; j++)
	{
		dest[lengthd + 1] = tmp[j];
	}
	dest[length + i] = '\0';
	return (dest);
}

