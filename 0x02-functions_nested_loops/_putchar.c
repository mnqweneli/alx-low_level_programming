#include <unistd.h>

/**
 * putchar - writes the characters to stdout.
 * Return: On Success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
