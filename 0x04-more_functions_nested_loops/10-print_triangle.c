#include "main.h"
/**
 * print_triangle - printing a triangle with a new line
 * @size: parameter
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, b;

if (size > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (b = size - i; b > 0; b--)
			_putchar(' ');
		for (b = 0; b < i; b++)
			_putchar('#');
		if (i == size)
			continue;
		}
}
_putchar('\n');
}
