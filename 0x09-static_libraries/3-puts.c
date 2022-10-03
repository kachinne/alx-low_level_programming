#include "main.h"
/**
 * _puts - Prints a string with a new line
 * @str: paramter
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar('\n');
}
