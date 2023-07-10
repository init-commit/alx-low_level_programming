#include <stddef.h>
#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string
* @c: character to locate
* Return: pointer to the first occurrence of @c
*		NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
