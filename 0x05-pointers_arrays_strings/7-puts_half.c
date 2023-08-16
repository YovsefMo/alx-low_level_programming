#include "main.h"
/**
 * puts_half - prints half of a sting
 * @str: pointer to targeted string
 * Return: void
 */
void puts_half(char *str)
{
	int i, x, z;
	i = 0;

	while (str[i] != '\0')
		i++;

	if ((i % 2) == 0)
	{
		x = i / 2;

		for (z = x ; str[z] != '\0' ; z++)
			_putchar(str[z]);
	}
	else if (i % 2)
	{
		x = (i - 1) / 2;

		for (z = x + 1 ; str[z] != '\0' ; z++)
			_putchar(str[z]);
	}

	_putchar('\n');
}
