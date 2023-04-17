#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - uses the macro named SIZE from the header file
 *
 * Return: Always .
 */
int main(void)
{
	int s;

	s = 98 + SIZE;
	printf("%d\n", s);
	return (0);
}
