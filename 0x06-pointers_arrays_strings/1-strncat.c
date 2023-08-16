#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest + src
 * @src: to be appended to dest
 * @n:the maximum bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0' && len2 < n)
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len] = '\0';

	return (dest);
}
