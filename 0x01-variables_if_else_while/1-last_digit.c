#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last number of a digit
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10

	if (j > 5)
		printf("The last digit of %d is %f and is greater than 5\n", n, j);
	else if (j == 0)
		printf("The last digit of %d is %f and is 0\n", n, j);
	else if (j < 6 && j != 0)
		printf("The last digit of %d is %f and is less than 6 and not 0\n", n, j);
	
	return (0);
}
	
