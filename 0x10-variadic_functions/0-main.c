#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 102, 4);
	printf("%d\n", sum);
	sum = sum_them_all(4, 98, 0124, 402, -1024);
	printf("%d\n", sum);
	return (0);
}
