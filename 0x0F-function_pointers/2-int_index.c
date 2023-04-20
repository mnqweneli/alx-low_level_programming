#include "function_pointers.h"

/**
 * int_index-function that searches for an int
 * @array: array
 * @size: size of an element
 * @cmp: pointers
 * Return: -1 if array is null and size does not equal 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	while (i < size)
	{
		if (array == NULL || size <= 0 || cmp == NULL)
		{
			return (-1);
		}
		if (cmp(array[i]))
			return (i);

		return (-1);
		i++;
	}
}
