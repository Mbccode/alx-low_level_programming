#include "main.h"

int ben_recursion(int n, int i);

/**
 * _sqrt_recursion - Entry point
 * @n: int variable
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (ben_recursion(n, 0));
}

/**
 * ben_recursion - function helper
 * @n: integer variable
 * @i: iterator variable
 *
 * Return: the square root
 */

int ben_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (ben_recursion(n, i + 1));
}
