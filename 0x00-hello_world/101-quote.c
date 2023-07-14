#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints out the output with
 * the write function call
 * Return: 0 on terminating the process
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
