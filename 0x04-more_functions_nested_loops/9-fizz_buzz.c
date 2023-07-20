#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int x = 0;

	while (x <= 100)
	{
		if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d ", x);
		}
		else if (x % 3 == 0 || x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
