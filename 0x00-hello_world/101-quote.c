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
	char strerr[] = "Error, no string detected\n";
	int n;
	int x;

	n = strlen(str);
	x = strlen(strerr);
	if (n > 0)
	{
		fwrite(str, n, 1, stderr);
	}
	else
	{
		fwrite(strerr, x, 1, stderr);
	}

	return (1);
}
