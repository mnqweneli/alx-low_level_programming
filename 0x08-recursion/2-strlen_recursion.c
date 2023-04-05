#include "main.h"

/**
 * _strlen_recursion - Returns the length of the string.
 * @c: string to be measured.
 * Returns: length of the string.
 * Author : Mnqweneli Qabo
 */
int _strlen_recursion(char *c)
{
	int length = 0;

	if (*c)
	{
		length++;
		length += _strlen_recursion(c + 1);
	}

	return (length);
}
