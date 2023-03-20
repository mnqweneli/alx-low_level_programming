#include <stdio.h>

/**
 * main - Entry point
 * Descr - prints all single digit numbers of base ten starting from zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	/*print code goes here*/
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
