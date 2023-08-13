#include "main.h"
/**
 * _puts - does the same as puts
 * @str: target array
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
