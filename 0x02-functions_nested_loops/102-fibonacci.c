#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int num1, num2, next_num;

	num1 = 0;
	num2 = 1;
	for (i = 0; i < 49; i++)
	{
		next_num = num1 + num2;
		printf("%ld, ", next_num);
		num1 = num2;
		num2 = next_num;
		next_num = num1 + num2;
	}
	printf("%ld", next_num);
	printf("\n");

	return (0);
}
