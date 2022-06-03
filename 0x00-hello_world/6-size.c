#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char single_character;
	int number;
	long int a_long_number;
	long long int a_long_long_number;
	float a_float_number;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(single_character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(number));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a_long_number));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a_long_long_number));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a_float_number));

	return (0);
}
