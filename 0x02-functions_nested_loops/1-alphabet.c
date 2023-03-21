#include "main.h"

/**
 * print_alphabet - alphabet function that will be called in the main void
 *  Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
