#include "main.h"
/**
 * _strcpy - copies string to another
 * @dest: receiver buffer
 * @src: one to be coppied
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	while (src[l] != '\0')
		l++;

	for (i = 0 ; i <= l ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
