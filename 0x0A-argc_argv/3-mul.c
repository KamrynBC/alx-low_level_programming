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
	int i, j, product;

	if (argc == 3)
	{
		i = argc - 1;
		j = argc - 2;
		product = atoi(argv[j]) * atoi(argv[i]);
		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
