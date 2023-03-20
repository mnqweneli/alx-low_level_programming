#include <stdio.h>

/**
 * main - entry point
 * Descr- prints all single digit numbers of base ten starting from zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	/* print numbers here */
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
