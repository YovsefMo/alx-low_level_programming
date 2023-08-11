#include "main.h"
/** print_alphabet_x10 - none
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

       for (i = 0 ; i < 10 ; i++)
       {
		int j;

		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}

		_putchar(10);
       }
}
