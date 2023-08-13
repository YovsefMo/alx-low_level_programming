#include "main.h"
/**
 * printing_triangle - speaks
 * @size: speaks
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z, c;

	if (size > 0)
	{
		for (x = 1 ; x <= size ; x++)
		{
			for (y = size - x ; y >= 0 ; y--)
			{
				_putchar(' ');
			}
			for (c = size - y ; c <= size ; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
	
		}
	}
}
