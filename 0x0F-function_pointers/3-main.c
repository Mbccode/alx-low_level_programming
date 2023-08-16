#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point for program
 * that perfroms simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int ben1, ben2, result;
	char b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ben1 = atoi(argv[1]);
	ben2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	b = *argv[2];

	if ((b == '/' || o == '%') && ben2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(ben1, ben2);

	printf("%d\n", result);

	return (0);
}
