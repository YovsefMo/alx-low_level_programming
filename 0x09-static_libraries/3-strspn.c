#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: input
 * @accept: substring
 * Return: z
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;

	int x = 0, y;

	while (s[x] != 0)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
			else if (accept[y + 1] == '\0')
			{
				return (z);
			}
		}
		x++;
	}
	return (z);
}
