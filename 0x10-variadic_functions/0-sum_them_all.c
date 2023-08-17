#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum of numbers
 * @n: integer number
 * Return: the summation of given numbers
 * on success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ben;

	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ben, n)

	for (i = 0; i < n; i++)
		total += va_arg(ben, int);

	va_end(ben);
	return (total);
}
