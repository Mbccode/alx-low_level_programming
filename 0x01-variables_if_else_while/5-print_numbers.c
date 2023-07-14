#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints number in base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int m = 0;

	while (m < 10)
	{
		printf("%d", m);
		m++;
	}

	printf("\n");
	return (0);
}
