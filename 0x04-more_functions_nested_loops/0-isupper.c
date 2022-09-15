#include "main.h"

/**
 * _isupper - check the english alphabet for upper case.
 * @c: the character to be tested
 * Return: 1 if c is uppercase, 2 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
