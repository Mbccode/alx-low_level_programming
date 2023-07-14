#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if exited in proper manner
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof (char));
	printf("Size of int: %d byte(s)\n", sizeof (int));
	printf("Size of long int: %d byte(s)\n", sizeof (long int));
	printf("Size of long long int: %d byte(s)\n", sizeof (long long int));
	printf("Size of float: %d byte(s)\n", sizeof (float));
	return (0);
}
