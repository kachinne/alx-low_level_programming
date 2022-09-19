#include "main.h"
/**
 * print_rev - Prints a string in reverse form
 * @s: parameter
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = 0, space;

	while (s[space++])
		length++;
	for (space = length - 1; space >= 0; space--)
		_putchar(s[space];
	_putchar('\n');
}
