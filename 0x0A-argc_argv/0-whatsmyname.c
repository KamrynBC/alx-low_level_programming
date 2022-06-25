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

	i = argc - argc;
	printf("%s\n", argv[i]);

	return (0);
}
