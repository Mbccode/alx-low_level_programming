#include <stdio.h>

/**
 * main - Entry point
 * Desc: Number of different kinds separated with comma
 * Return: 0
 */

int main(void)
{
	int x, z;

	for (x = 48; x < 58; x++)
	{
		for (z = 49; z < 58; z++)
		{
			if (z > x)
			{
				putchar(x);
				putchar(z);
				if (x < 56 || z < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
