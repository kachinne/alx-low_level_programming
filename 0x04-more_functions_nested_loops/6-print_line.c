#include "main.h"
/**
 * print_line - Drawing a straight line in the terminal
 * @n: Parameter
 * Return: Always 0
 */
void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		_putchar('_');
		}
	_putchar('\n');
}
