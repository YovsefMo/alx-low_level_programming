#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to array
 * @str: input string
 * Return: NULL or str
 */
char *_strdup(char *str)
{
	int x = 0, y;
	char *strml;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	strml = (char *)malloc(x + 1 * sizeof(char));

	if (strml != NULL)
	{
		for (y = 0 ; str[y] != '\0' ; y++)
			strml[y] = str[y];
	}
	else
		return (NULL);

	strml[y] = '\0';

	return (strml);

}
