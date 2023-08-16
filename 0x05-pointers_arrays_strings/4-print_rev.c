#include "main.h"
/**
 * print_rev - prints strings reversed
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int x, z;

	while (s[i] != '\0')
		i++;

	z = i;

	for (x = z - 1 ; x >= 0 ; x--)
		_putchar(s[x]);

	_putchar('\n');

}
