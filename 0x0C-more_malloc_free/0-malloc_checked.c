#include "main.h"
#include <stdlib.h>

/**
 * malloc_checkded - allocates memory using malloc
 *
 * @b: number to allocate
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
