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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] <123)
		{
			s[i] -= 32;
		}
	}

	return (s);
}
