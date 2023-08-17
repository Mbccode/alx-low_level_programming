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
	va_list my_nums;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(my_nums, n);

	for (count = 0; count < n; count++)
		sum += va_arg(my_nums, int);
	va_end(my_nums);
	return (sum);
}
