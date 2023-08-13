#include "main.h"
/**
 * print_diagonal - prints a dia line
 * @n: spaces parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int m;
	int o = n;

	for(m = 0 ; m <= o ; m++)
	{
		int s = m;

		if ((m != 0) && (m > 0))
		{

			while(s > 0)
			{
				_putchar(' ');
				s--;
			}

			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar('\n');
	}
}
