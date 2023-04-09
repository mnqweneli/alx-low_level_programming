#include <unistd.h>

/**
 * _putchar - writes the character c to output
 * @c: Character tat is being printed out
 *
 * Return: 1 (on success) and -1 on erro
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
