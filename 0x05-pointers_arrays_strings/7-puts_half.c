#include "main.h"
/**
 * puts_half - prints half of a sting
 * @str: pointer to targeted string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, x;

	while (str[i] != '\0')
		i++;

	if ((i % 2) = 0)
		x = i / 2;
	else
		x = (i - 1) / 2;

	for(int z = 0 ; z < x ; z++)
		_putchar(z);

	_putchar('\n');
}
