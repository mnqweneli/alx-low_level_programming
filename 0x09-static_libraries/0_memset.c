#include "main.h"

/**
 * _memset - fills a function with a value
 * @s: starting address
 * @b: the values required
 * @n: number of bytes
 *
 * RETURN: n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
