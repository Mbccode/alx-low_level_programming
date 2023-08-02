#include "main.h"

/**
 * factorial - Entry point
 * @n: int variable
 * Return: factorial of int n on success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
