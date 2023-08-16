#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: arrays of integers
 * @action: pointer to a function
 * @size: size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned i = 0;

	if (!array || !action)
		return;

	while(i < size)
	{
		action(array[i]);
	}
	i++;
}
