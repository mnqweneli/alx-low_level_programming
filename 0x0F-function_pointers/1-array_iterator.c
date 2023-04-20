#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a faunction given as a parameter
 * @array: array passed as an arguement
 * @size: size of the elements
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	while (n < size)
	{
		n = 0;

		if (array == NULL || action == NULL)
		{
			return;
		}
		n++;
		action(array[n]);
	}

}
