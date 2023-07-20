#include "main.h"

/**
 * print_most_numbers - Entry point
 * Return: Null
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
		x++;
	}
	_putchar('\n');
}
