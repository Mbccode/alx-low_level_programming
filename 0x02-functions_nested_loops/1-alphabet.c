#include "main.h"

/**
 * main - Entry point
 * print_alphabet: print all alphabet in lowercase
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char ben;

	for (ben = 'a'; ben <= 'z'; ben++)
		_putchar(ben);
	_putchar('\n');
}
