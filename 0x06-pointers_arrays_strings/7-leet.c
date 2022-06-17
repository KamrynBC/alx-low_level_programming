#include "main.h"

/**
 * *leet - Entry point
 * @str: string
 *
 * Return: Character
 */
char *leet(char *str)
{
	int i, j;
	char k[] = "aAeEoOtTlL";

	i = 0;
	while (str[i] != '\0')
	{
		j =0;
		while (k[j] != '\0')
		{
			if (str[i] >= k[0] && str[i] <= k[9])
			{
				k[0] = '4';
				str[i] = k[0];
				k[1] = '4';
				str[i] = k[1];
				k[2] = '3';
				str[i] = k[2];
				k[3] = '3';
				str[i] = k[3];
				k[4] = '0';
				str[i] = k[4];
				k[5] = '0';
				str[i] = k[5];
				k[6] = '7';
				str[i] = k[6];
				k[7] = '7';
				str[i] = k[7];
				k[8] = '1';
				str[i] = k[8];
				k[9] = '1';
				str[i] = k[9];
			}
			j++;
		}
		i++;
	}

	return (str);
}
