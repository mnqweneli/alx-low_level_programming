#include "1-pi.h"
#include <stdio.h>

/**
 * main - uses the defined macro named PI from the header file.
 *
 * Return: 0.
 */
int main(void)
{
	float a;
	float r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);
	return (0);
}
