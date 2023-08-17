#include "main.h"
/**
 * _strchr - locates a character
 * @s: targeted array pointer
 * @c: character to located
 * Return: c or null
 */ 
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
		return (0);
}
