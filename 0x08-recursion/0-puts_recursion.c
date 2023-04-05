#include "main.h"

/**
 * _puts_recursion - function just like puts();
 *
 * @c: the input char
 * Return: Always 0.
 */

void _puts_recursion(char *c)
{
	char s;


	if (c)
	{
		_putchar(*c);
		_puts_recusion(c + 1);
	}
	else
	{
		_putchar("\n");
	}
}
