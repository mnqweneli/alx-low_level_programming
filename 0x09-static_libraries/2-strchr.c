#include "main.h"
#include <stdddef.h>

/**
 * _strchr - fill funtcion with code
 * @s: input number
 * @c: input number
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
