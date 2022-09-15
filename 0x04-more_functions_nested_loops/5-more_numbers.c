#include "main.h"

/**
 * more_numbers - prints 0 t0 9 10 times
 */
void more_numbers(void)
{
	int count, n;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
