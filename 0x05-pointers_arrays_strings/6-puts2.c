#include "main.h"
/**
 * puts2 - every other char
 * @str: pointer to string targeted
 * Return: void
 */
void puts2(char *str)
{
	int i, o;

	while (str[i] != '\0')
		i++;

	for (o = 0 ; o > i ; o += 2)
		_putchar(str[o]);

	_putchar('\n');
}
