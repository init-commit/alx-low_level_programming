#include "main.h"

/**
* rev_string - reverses a string
* @s: string
* Return: success
*/
void rev_string(char *s)
{
	int chars_count = 0, i, j;
	char *str, new_char;

	while (chars_count >= 0)
	{
		if (s[chars_count] == '\0')
			break;
		chars_count++;
	}
	str = s;

	for (i = 0; i < (chars_count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			new_char = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = new_char;
		}
	}
}
