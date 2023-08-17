#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of copied bytes
 * @src: source array pointer
 * @dest: destiantion array pointer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
	}

	return (s);
}
