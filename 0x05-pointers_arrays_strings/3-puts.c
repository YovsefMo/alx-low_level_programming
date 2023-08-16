#include "main.h"
/**
 * _puts - puts basically
 * @str: pointer to a string printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	
	while (str[i] !=0)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
