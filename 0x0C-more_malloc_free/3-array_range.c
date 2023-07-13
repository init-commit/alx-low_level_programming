#include "main.h"

/**
* array_range - creates an array of integers
* @min: lowest integer
* @max: highest integer
* Return: pointer to the created array
*	NULL if min > max
*	NULL f malloc fails
*/

int *array_range(int min, int max)
{
	int *myarray;
	int length;
	int i;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;

	myarray = (int *)malloc(sizeof(int) * length);

	if (myarray == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		myarray[i] = min++;

	return (myarray);
}
