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
	va_list args;

	va_start(args, n);

	int total = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			total += va_arg(args, int);
		}
	}
	va_end(args);
	return (total);
}
