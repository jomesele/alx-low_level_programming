#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 * @num the number to be tested
 * Return: the last digit of a number
 */
int print_last_digit(int num)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
