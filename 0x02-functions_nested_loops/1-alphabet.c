#include "main.h"
/**
 * print_alphabet - prnint lower case english alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');

	return (0);
}
