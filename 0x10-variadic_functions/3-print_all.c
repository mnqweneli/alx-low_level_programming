#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of args passed
 */
void print_all(const char * const format, ...)
{
	char *sp, *dv = "";
	unsigned int i;

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", dv, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", dv, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", dv, va_arg(ls, double));
					break;
				case 's':
					sp = va_arg(ls, char *);
					if (!sp)
					{
						sp = "(nil)";
					}
					printf("%s%s", dv, sp);
					break;
				default:
					i++;
				continue;
			}
			sp = " ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
