#include <stdio.h>

/**
 * main - Entry point
 * Desci - prints the lowercase alphabet in reverse
 * Return: Always: 0 (Success)
 */

int main(void)
{
	char ch = 'z';
	/* print alphabet code below*/
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
