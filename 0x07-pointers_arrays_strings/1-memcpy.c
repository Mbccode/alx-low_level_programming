#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: dest value on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
