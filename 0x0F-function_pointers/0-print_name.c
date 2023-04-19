#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *@name: name of the person
 *@f: function pointer
 *Return: null value
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
	{
		return;
		*f(name);
	}
	if (name == NULL)
	{
		return;
		*f(name)
	}

}
