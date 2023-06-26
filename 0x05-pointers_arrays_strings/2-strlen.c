#include <stdio.h>

/**
* _strlen - returns the length of a string
* @s: character to be checked
* Description: counts characters of a string
* Return: length of s
*/
int _strlen(char *s)
{
	int counter = 0;

	while (*s++)
		counter++;
	return (counter);
}
