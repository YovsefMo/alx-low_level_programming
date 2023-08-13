#include "main.h"
/**
 * print_diagonal - prints a dia line
 * @n: spaces parameter
 * Return: 0
 */
void print_diagonal(int n)
{

	while (n > 0)
	{
		_putchar(' ');
		n--;
	}

	_putchar('\\');
	_putchar('\n');
}
