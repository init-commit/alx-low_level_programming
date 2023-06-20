#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabetical order 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int counter = 1;

	while (counter <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	counter++;
	}
}
