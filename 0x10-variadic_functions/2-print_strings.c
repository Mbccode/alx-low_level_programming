#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point
 * @separator: Characters to be printed
 * @n: numbers to be printed
 * @...: A variable number of strings to be printed
 *
 * Description: if separator is null dont print
 * if any of string is null print nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int count;

	va_start(string, n);

	for (count = 0, count < n, count++)
		if (va_arg(string, char *) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(string, char *);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);

	va_arg(string);
	printf("\n");
}
