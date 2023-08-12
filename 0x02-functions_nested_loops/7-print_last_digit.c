#include "main.h"
/**
 * print_last_digit - speaks for itself
 * @i: input
 * Return: i % 10
 */
int print_last_digit(int i)
{
	i = i + _putchar((i % 10) + '0');
	return (i);
}
