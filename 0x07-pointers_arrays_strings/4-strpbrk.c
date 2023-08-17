#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - sets a pointer to
 * where @accept element appears
 * @s: input
 * @accept: array of elements to be compared to
 * Return: pointer to @accept occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		for (y = 0 ; accept[y] ; y++)
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
		}
		x++;
	}

	return (NULL);
}
