#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: spaces parameter
 * Return: void
 */
void print_diagonal(int n)
{
int m, o;

for (o = 0; o < n; o++)
{
for (m = 0; m < o; m++)
{
_putchar(' ');
}

_putchar('\\');

_putchar('\n');
}

if (n <= 0)
{
_putchar('\n');
}
}

