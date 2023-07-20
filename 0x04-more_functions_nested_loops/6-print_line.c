#include "main.h"

/**
 * print_line - Entry point
 * @n: integer variable
 * Return: Null
 */

void print_line(int n)
{
	char c = '_';
	int x;

	for (x = 0; x < n; ++x)
		_putchar(c);

	_putchar('\n');
}
