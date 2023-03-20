#include <stdio.h>

/**
 * main - Entry point
 * Descr - prints alphabets and excludes the letter q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	/* print a-z and exludes q and e */
	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
