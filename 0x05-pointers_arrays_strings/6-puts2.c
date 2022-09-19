#include "pro.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer to the string
 *
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
