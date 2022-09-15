#include "main.h"
/**
 * print_triangle - printing a triangle with a new line
 * @size: parameter
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int ink, boy;

if (size > 0)
{
	for (ink = 1; ink <= size; ink++)
	{
		for (boy = size - ink; boy--)
			_putchar(' ');
		for (boy = 0; boy < ink; boy++)
			_putchar('#');
		if (ink == size)
			continue;
		}
}
_putchar('\n');
}
