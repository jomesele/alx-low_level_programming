#include <stdio.h>

/**
 * main - prints all base16 numbers(lowercase)
 *
 * Return: 0
 */
int main(void)
{
	int j;
	char c;

	for (j = 0; j < 10; j++)
	{
		putchar((j % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
