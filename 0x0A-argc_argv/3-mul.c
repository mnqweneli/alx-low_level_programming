#include <stdio.h>
#include <stdlib.h>

/**
 * main - maltiplies two numbers
 * @argc: interger argument passed in the function
 * @argv: char argument passed in the function
 *
 * Return: 1(succes) or Error if otherwise
 */

int main(int argc, char *argv)
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		printf("%d", argv[i]);
	}
	if (i  != 2)
	{
		printf("Error");
	}

	return (1);
}
