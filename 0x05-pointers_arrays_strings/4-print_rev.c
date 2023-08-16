#include "main.h"
/**
 * print_rev - prints strings reversed
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int x;

	while (s[i] == '\0')
		i++;

	for (x = i - 1 ; x >= s[0] ; x--)
		_putchar(s[x]);

	_putchar('\n');

}
