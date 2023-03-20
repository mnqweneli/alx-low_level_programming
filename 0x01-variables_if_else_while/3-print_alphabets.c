#include <stdio.h>

/**
 * main - Entry point
 * Descr - Prints alphabets in lower and uppercase
 * Return:  Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*lower case alphabets */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* uppercase alphabets */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
