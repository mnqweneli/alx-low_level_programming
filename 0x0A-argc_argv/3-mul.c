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


	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
			sum = sum +  atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
	printf("Error");
	}

	return (1);
}
