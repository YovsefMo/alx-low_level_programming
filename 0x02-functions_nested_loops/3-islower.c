#include "main.h"
/**
 * _islower - checker
 * desc: simple checker
 * Return= 1 if c, else 0
 */
int _islower(int c)
{
	if (c == 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
