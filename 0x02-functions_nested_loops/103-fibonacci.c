#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1, num2, next_num, total;

	num1 = 0;
	num2 = 1;
	total = 0;
	next_num = num1 + num2;
	for (next_num = 1; next_num <= 4000000; next_num++)
	{
		if (next_num % 2 == 0)
		{
			total = total + next_num;
			num1 = num2;
			num2 = next_num;
			next_num = num1 + num2;
			total = total + next_num;
		}
	}
	printf("%lu\n", total);

	return (0);
}
