#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Return:0
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		if (alphab != 'e' && alphab != 'q')
			putchar(alphab);
	}

	putchar('\n');

	return (0);
}
