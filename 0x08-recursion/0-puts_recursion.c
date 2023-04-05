#include "main.h"

/**
 * Author: Mnqweneli Qabo
 * _puts_recursion(char *s) - fuction
 *
 * @s: the input char
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recusion(s + 1);
	}
	else
	{
		_putchar(\n);
	}
}
