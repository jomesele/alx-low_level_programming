#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 * @num: the number to be tested
 * Return: the last digit of a number
 */
int print_last_digit(int num)
{
	int lastNUM = num % 10;

	if (lastNUM < 0)
		lastNUM *= -1;

	_putchar(lastNUM + '0');

	return (lastNUM);
}
