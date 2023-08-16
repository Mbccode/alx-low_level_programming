#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: Array name
 * @size: size of array
 * @cmp: compare function
 * Return: index of the first element on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}

	return (-1);
}
