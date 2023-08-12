#include "main.h"
/**
 * print_last_digit - speaks for itself
 * @i: input
 * Return: i % 10
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;
	_putchar(last_digit + '0');

	if (last_digit < 0)
		last_digit *= -1;

	return (last_digit);
}
