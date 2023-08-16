#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: dest + src
 * @src: to be appended to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len] = '\0';

	return (dest);
}
