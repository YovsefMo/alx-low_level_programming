#include "main.h"
/**
 * _strlen - returns length
 * @s: target parameter
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	
	return (l);
}
