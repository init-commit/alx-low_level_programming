#include "main.h"

/**
* puts_half - prints half a string
* @str: input
* Return: Success
*/
void puts_half(char *str)
{
	int length, mid_string, to_print;

	for (length = 0; str[length] != '\0'; length++)
	{

	}

	mid_string = (length - 1) / 2;

	for (to_print = mid_string + 1; str[to_print] != '\0'; to_print++)
		_putchar(str[to_print]);

	_putchar('\n');
}
