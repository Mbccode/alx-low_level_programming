#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char ben;

	for (ben = 'a'; ben <= 'z'; ben++)
		_putchar(ben);
	_putchar('\n');
}
