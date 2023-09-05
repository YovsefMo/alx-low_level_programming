#include "main.h"
/**
 * create_array - creats an array full of a char
 * @size: size input
 * @c: char input
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int counter = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	while (ar[counter] != '\0')
	{
		ar[counter] = c;
		counter++;
	}
	ar[counter] = '\0';

	return (ar);
}
