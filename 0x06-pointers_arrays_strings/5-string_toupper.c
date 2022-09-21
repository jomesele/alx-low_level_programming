#include "main.h"

/**
 * string_toupper - change lowercase alphabet to uppercase
 * @s: string to be changed
 * 
 * @Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] <123)
		{
			c[i] -= 32;
		}
	}

	return (c);
}
