#include "pro.h"

/**
 * print_rev - prints reversed string followed by a new line
 * @s: pointer to the string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
