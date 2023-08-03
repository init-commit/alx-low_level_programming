#include "main.h"

/**
 * set_bit - ets the value of a bit to 1 at a given index
 * @index: index to set
 * @n: parameter
 *
 * Return: 1 on success
 *	-1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
