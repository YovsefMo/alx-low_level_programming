#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: to be checked
 * Return: 0 or i
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
