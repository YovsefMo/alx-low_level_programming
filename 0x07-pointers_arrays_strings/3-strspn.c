#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: input
 * @accept: substring
 * Return: z
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (s[x] != accept[y])
			{
				return (x);
			}
		}
	}

	return (x);
}
