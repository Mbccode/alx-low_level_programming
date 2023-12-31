#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array:  Name of the array
 * @size: size of array
 * @action: pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
