#include "main.h"

/**
 * main - Entry point
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char ben;

	for (ben = 'a'; ben <= 'z'; ben++)
		_putchar(ben);
	_putchar('\n');
}
