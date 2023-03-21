#include <stdio.h>

/**
 * main - Entry point
 * Description - prints all the numbers of base sixteen in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;
	/* code below */
	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n += 39;
		n++;
	}
	putchar('\n');
	return (0);
}
