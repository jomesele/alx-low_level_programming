#include <stdio.h>
/**
 * main- main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of long int: %i byte(s)\n", sizeof(long int));
	printf("Size of long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of float: %i bytes(S)\n", sizeof(float));
	return(0);
}