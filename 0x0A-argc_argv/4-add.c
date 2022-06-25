#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: Number of arguements
 * @argv: String arguement vector
 *
 * Return: Answer
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9' && !(atoi(argv[i]) < 0))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");

				return (1);
			}
		}
		printf("%d\n", sum);

		return (0);
	}
	else
	{
		i = 0;
		printf("%d\n", i);

		return (0);
	}
}
