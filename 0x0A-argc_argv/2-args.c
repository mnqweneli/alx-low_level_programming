#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it recieves
 *
 * @argc: integer arguments you pass in the function
 * @argv: char arguments you pass in the function
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
