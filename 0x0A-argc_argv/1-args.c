#include "main.h"
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
	int i;

	(void)argv;
	i = argc - 1;
	printf("%d\n", i);

	return (0);
}
