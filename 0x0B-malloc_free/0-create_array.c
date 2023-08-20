#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: input
 * @c: input char
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return (NULL);

	x = (char *)malloc(size * sizeof(char));

	if (x == NULL)
		return (NULL);

	for (y = 0 ; y < size ; y++)
		x[y] = c;

	return (x);
}
