#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: input
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int x;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
