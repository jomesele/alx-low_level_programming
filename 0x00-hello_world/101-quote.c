#include <stdio.h>
/**
 * main- main block
 * Return: 0
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}