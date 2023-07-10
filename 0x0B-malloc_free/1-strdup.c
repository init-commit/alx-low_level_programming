#include "main.h"

/**
* _strdup - returns pointer to a newly allocated space in mem
* @str: string
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *str2;
	char length;

	if (str == NULL)
		return (NULL);

	length = strlen(str) + 1;
	str2 = (char *)malloc(length * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	strcpy(str2, str);

	return (str2);
}
