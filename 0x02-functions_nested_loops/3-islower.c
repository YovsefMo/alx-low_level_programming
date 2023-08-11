#include "main.h"
/**
 * _islower - checker
 * desc: simple checker
 * Return= 1 if c, else 0
 */
int _islower(int c)
{
	if (97 >= c && c <= 122)
		return (1);
	else
		return (0);
}
