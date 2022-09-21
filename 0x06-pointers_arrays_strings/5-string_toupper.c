#include "main.h"

/**
 * string_toupper - change lowercase alphabet to uppercase
 * @s: string to be changed
 * 
 * @Return: s
 */
char *string_toupper(char *s)
{
	char *s = str;

	for (; *str != '\0'; str++)
		if (*str >= 97 && *str <= 122)
			*str -= 32;
	
	return (s);
}
