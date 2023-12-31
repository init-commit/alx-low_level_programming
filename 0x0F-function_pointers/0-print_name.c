#include "function_pointers.h"

/**
* print_name - prints a name
* @name: name to print
* @f: function pointer that takes one char parameter
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
	else
		return;
}
