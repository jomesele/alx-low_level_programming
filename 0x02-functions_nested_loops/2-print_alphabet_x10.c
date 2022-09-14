#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet characters 10 times
 *
 * Return: void(nothing)
 */
void print_alphabet_x10(void)
{
	int i;
	char chr;

	for (i = 0; i <= 10; i++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
			_putchar(chr);
	}
	_putchar('\n');
}
