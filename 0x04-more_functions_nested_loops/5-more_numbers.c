#include "main.h"
/**
 * more_numbers - 0 to fowten
 * Return: void
 */
void more_numbers(void)
{
	int x, z;
	for (x = 1 ; x < 11 ; x++)
	{
		for (z = 0 ; z<= 14 ; z++)
		{
			_putchar(z + '0');

			if(z < 9)
			{
				_putchar((z % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
