#include "main.h"

/**
 * factorial - Returns the factorial of a number .
 * @num: number toreturn the factorial from
 *
 * Return: factorial of num.
 */
int factorial(int num)
{
	if (num < 0)
	{
		return (-1);
	}
	if (num == 0)
	{
		return (1);
	}
	return (num * factorial(num - 1));
}
