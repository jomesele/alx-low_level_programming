#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}

	return (0)
}
