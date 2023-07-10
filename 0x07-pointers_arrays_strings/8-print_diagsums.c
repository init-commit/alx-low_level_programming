#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* @a: the array
* @size: size of the array
* Return: success
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum_left_to_right = 0, sum_right_to_left = 0;

	for (i = 0; i < size; i++)
	{
		sum_left_to_right += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum_right_to_left += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum_left_to_right, sum_right_to_left);
}
