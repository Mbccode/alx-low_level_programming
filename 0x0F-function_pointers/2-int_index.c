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
	unsigned int i = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
