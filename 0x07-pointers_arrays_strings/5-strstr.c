#include "main.h"
/**
 * strstr - checks for substring occurrence
 * @haystack: original string
 * @needle: substring
 * Return: pointer to substring occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0 ; haystack[x] != '\0' ; y++)
	{
		for (y = 0 ; needle[y] != '\0' && haystack[x + y] == needle[y] ; y++)
		{

		}

		if (needle[y] == '\0')
		{
			return (&haystack[x]);
		}
	}

	return ('\0');
}
