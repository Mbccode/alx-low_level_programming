#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: Char variable
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	_putchar(*s);
	_puts_recursion(s + 1);
}
