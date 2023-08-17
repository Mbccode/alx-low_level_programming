#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * @...: A variable number of strings to be printed
 *
 * Description: if separator is null dont print
 * if any of string is null print nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int count;
	char *wrd;

	va_start(str, n);

	for (count = 0, count < n, count++)
	{
		wrd = va_arg(str, char *);

		if (wrd == NULL)
			printf("nil");
		else
			printf("%s", wrd);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
