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
	if (name == NULL || f == NULL)
	{
		return;
		f(name);
	}

}
