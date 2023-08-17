#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point
 * @separator: Characters to be printed
 * @n: numbers to be printed
 * Return: Null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);

	for (count = 0, count < n, count++)
		if (va_arg(args, char *) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(args, char *);

		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);

	va_arg(args);
	printf("\n");
}
