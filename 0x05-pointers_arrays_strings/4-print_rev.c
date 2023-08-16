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

	while (s[i] == '\0')
		i++;

	z = i;

	for (x = z - 1 ; z >= 0 ; z--)
		_putchar(s[z]);

	_putchar('\n');

}
