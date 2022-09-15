#include "main.h"
/**
 * print_diagonal - draw a diagonal
 * @n: Parameter
 *
 * Return: Always 0
 */
print_diagonal(int n)
{
	int b, can;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (can = 0; can < b; can++)
			_putchar(' ');
			_putchar('\\');
			if (b == n - 1)
				continue;
			_putchar('\n');
		}
	}
		_putchar('\n');
}

