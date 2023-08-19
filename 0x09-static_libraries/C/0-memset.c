#include "main.h"
/**
 * _memset - fills n memory with b bytes
 * @s: targeted array
 * @b: the byte to be filled with
 * @n: number of bytes replaced
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
