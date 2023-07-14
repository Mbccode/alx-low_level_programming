#include <stdio.h>

/**
 * main - entry point
 * Description: Use putchar function to print alphabet
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
