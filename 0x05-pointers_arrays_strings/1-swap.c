#include <pro.h>

/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
