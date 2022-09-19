#include "pro.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integer
 * @a: the array of integers
 * @n: the umber of elements to be printed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
