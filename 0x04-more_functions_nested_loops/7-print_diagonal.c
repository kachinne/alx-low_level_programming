#include "main.h"
/**
 * print_diagonal - draw a diagonal
 * @n: Parameter
 *
 * Return: Always 0
 */
print_diagonal(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

