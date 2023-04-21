#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings- function that prints strings
 * @separator: The string to be printed
 * @n: number of strings passed
 * @...: number of strings to be printed
 *
 * Return: if separator is null dont print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list snum;
	char *sp;
	unsigned int i;

	va_start(snum, n);

	for (i = 0; i < n; i++)
	{
		sp = va_arg(snum, char *);

		if (sp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", sp);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(snum);
}
