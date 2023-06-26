#include <stdio.h>

/**
* swap_int - swaps the values of two integers
* @a: the first integer
* @b: the second integer
* Return 0
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
