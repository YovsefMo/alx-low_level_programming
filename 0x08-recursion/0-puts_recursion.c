#include "main.h"
/**
 * _puts_recursion - prints a string\n
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		void _puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
