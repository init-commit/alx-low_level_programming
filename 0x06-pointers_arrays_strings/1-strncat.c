#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: destination
 * @src: source
 * @n: bytes used from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int first_count = 0, second_count = 0;

	while (*(dest + first_count) != '\0')
		first_count++;

	while (second_count < n)
	{
		*(dest + first_count) = *(src + second_count);
		if (*(src + second_count) == '\0')
			break;
		first_count++;
		second_count++;
	}

	return (dest);
}
