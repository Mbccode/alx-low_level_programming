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
	va_list my_num;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(my_num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(my_num, int);

	va_end(my_num);
	return (sum);
}
