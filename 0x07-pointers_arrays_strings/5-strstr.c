#include "main.h"
/**
 * strstr - checks for substring occurrence
 * @haystack: original string
 * @needle: substring
 * Return: pointer to substring occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
