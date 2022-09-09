#include <stdio.h>

/**
 * main - prints single digit numbers starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar((j % 10) + '0');
	}

	putchar('\n');

	return (0);
}
