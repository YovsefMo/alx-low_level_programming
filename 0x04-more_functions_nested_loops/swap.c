#include <stdio.h>

int main (void)
{
	int n = 5;

	int *m = &n;

	printf("The value of m is not updated which is %d\n", *m);

	*m = 10;

	printf("It is now updated and equal %d\n", *m);

	*m = 15;

	printf("It is now updated again and equal %d\n", *m);

	return (0);
}
