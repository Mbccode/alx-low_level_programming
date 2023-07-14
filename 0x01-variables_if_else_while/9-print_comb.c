#include <stdio.h>

/**
 * main - Entry point
 * Desc: Combinations of numbers
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
		if (y < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
