#include "main.h"
/**
 * _islower - test an english character if it is lowercase or not
 * @c: character to test
 * Return: 1 if its lowercase and 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
