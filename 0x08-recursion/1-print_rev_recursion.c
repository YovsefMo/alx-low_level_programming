#include "main.h"
/**
 * _print_rev_recursion - string in reverse
 * @s: targeted string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int x;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
