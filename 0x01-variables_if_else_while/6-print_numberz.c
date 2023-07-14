#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints numbers with putchar function
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}
