#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name
 * @f: function which prints name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		f(name);
}