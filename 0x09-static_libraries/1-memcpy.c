#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory address
 * @src: memory copied to
 * @n: number of bytes
 *
 * return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}
