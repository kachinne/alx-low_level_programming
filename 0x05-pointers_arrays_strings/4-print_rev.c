#include "main.h"
/**
 * print_rev - Prints a string in reverse form
 * @s: parameter
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	while (*s)
	_putchar(*s--);
	_putchar('\n');
}
