#include "pro.h"

/**
 * rev_string -reverse string
 * @s: pointer to print the string
 */
void rev_string(char *s)
{
	char *t = s;
	char n[500];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
