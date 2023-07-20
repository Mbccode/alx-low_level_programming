#include "main.h"

/**
 * more_numbers - Entry point
 * Return: Null
 */

void more_numbers(void)
{
	int x;
	int y = 0;

	while (y <= 9)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar('0' + x);
		}
		y++;
		_putchar('\n');
	}
	_putchar('\n');
}
