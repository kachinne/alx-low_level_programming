#include "function_pointers.h"
/**
 * print_name - printing my name
 * @name: name of the chairman
 * @f: feel free
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
f(name);
}
