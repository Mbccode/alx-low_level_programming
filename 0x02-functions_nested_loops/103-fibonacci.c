#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main()
{
	int a = 1;
	int b = 2;
	int sum = 2;

	while (b <= 4000000)
	{
		int c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
	a = b;
	b = c;
	}

	printf("Sum of even-valued terms: %d\n", sum);
	return 0;
}
