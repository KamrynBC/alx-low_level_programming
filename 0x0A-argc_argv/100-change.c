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
	int i, sum = 0;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i > 0)
		{
			while (i > 0)
			{
				if (i >= 25)
				{
					sum = sum + 1;
					i = i - 25;
				}
				else if (i < 25 && i >= 10)
				{
					sum = sum + 1;
					i = i - 10;
				}
				else if (i < 10 && i >= 5)
				{
					sum = sum + 1;
					i = i - 5;
				}
				else if (i < 5 && i >= 2)
				{
					sum = sum + 1;
					i = i - 2;
				}
				else if (i < 2 && i >= 1)
				{
					sum = sum + 1;
					i = i - 1;
				}
			}
			printf("%d\n", sum);
			
			return (0);
		}
		else
		{
			printf("%d\n", sum);

			return (0);
		}
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
