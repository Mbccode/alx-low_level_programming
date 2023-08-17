#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int count;
	char *wrd;

	va_start(str, n);

	for (count = 0; count < n; count++)
	{
		wrd = va_arg(str, char *);

		if (wrd == NULL)
			printf("(nil)");
		else
			printf("%s", wrd);

		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(str);
}
