#include "main.h"
/**
 * _atol - string to int
 * @s: input string pointer
 * Return: converted string
 */
int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int length = 0;
	int valid = 0;
	int digit = 0;

	while (s[length] != '\0')
		length++;

	while (x < length && valid == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';

			if (y % 2)
				digit = -digit;

			z = z * 10 + digit;

			valid = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;

			valid = 0;
		}

		x++;
	}

	if (valid == 0)
		return (0);

	return (z);
	
}
