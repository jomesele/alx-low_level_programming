#include "pro.h"

/**
 * _puts - print a string folowed by a new line
 * @str: pointer to the string to print
 *
 * Return: nothing
 */
void _puts(chat *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
