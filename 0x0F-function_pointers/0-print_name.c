#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: name to be displayed
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
