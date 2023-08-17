#include "main.h"
/**
 * _strchr - locates a character
 * @s: targeted array pointer
 * @c: character to located
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
	int x;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (x);
		}
		else
		{
			x++;
		}
	}

	if (s[x] != NULL)
	{
		return (x);
	}
	else
	{
		return (NULL);
	}
}
