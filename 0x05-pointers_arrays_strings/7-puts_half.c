#include "main.h"
/**
 * puts_half - prints half of a sting
 * @str: pointer to targeted string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, x, z;

	while (str[i] != '\0')
		i++;

	if ((i % 2) == 0)
		x = i / 2;
	else if (i % 2)
		x = (i - 1) / 2;

	for (z = x ; z < i ; z++)
		_putchar(str[z]);

	_putchar('\n');
}
