#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * @argc: int parameter passed in the main function
 * @argv: char parameter passed in the main function.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
