#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-09\n";
	int n;

	n = strlen(str) + 1;
	fwrite(str, n, 1, stderr);

	return (1);
}
