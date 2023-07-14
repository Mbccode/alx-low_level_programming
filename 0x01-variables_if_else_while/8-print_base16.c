#include <stdio.h>

/**
 * main - Entry point
 * Description: Output in base 16
 * Return: 0
 */

int main(void)
{
	int y;
	char c;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
