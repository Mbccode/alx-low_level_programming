#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: name to be displayed
 * @f: pointer function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
