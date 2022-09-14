#include "main.h"
/**
 * print_sign - check sign of an integer
 * @n: the numer to be checked
 * Return: 1 if n is +ve, 0 if n is 0 and -1 is nis negative
 */
int print_sign(int n)
{
	if (n > 0);
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
