#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum of all its param
 * @n: number of parameters passed
 * @p: number of parameters to calculate
 * Return: 0 onlu if n equals to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(p, int);
	}

	va_end(p);
	return (sum);
}
