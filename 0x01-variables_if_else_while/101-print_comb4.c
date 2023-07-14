#include <stdio.h>

/**
 * main - Entry point
 * Desc: Different combination of three digits
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
