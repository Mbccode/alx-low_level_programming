#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int count;
	unsigned long b1 = 0, b2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = b1 + b2;
		printf("%lu", sum);

		b1 = b2;
		b2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
