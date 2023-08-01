#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Null on Success
 */

char *_strpbrk(char *s, char *accept)
{
		int m;

		while (*s)
		{
			for (m = 0; accept[m]; m++)
			{
			if (*s == accept[m])
			return (s);
			}
		s++;
		}

	return ('\0');
}
