#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Return:0
 */
int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
		putchar(alphab);
	putchar('\n');

	return (0);
}
