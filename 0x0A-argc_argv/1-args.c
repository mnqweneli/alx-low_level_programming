#include <stdio.h>
#include <stdlib.h>

/**
 * main - pints the number of arguments passed into it.
 *
 * @argc: string argrument passed into the function.
 * @argv: int arguments passed into the function.
 *
 * Return:0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{


		if (argv[i] != NULL)
		{
			argv[i] = 0;

			printf("%d\n", argc);
			argv[i]++;
		}
	}

	return (0);
}
