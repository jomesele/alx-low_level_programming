#include "main.h"
/**
 * _isalpha - test a character if it is an english alphabet character
 * @c: character to test
 * Return: 1 if its an english character 0 else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
