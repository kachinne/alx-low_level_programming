#include "main.h"
/**
 * print_line - Drawing a straight line in the terminal
 * @n: Parameter
 * Return: Always 0
 */
void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c <= n)
		{
			_putchar('_');
			c++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
