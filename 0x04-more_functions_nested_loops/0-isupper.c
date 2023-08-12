#include "main.h"
/**
 * isupper - checks for uppercase
 * @c: to be checked
 * Return: 0 or i
 */
int _isupper(int c)
{
	if (c >= 'A' ; c <= 'Z' ; c++)
		return (1);
	else
		return (0);
}
