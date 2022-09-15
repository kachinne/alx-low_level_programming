#include "main.h"
/**
 * print_square - Function that prints square
 * @size: parameter
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int love, life;

	if (size > 0)
	{
		for (love = 0; love < size; love++)
		{
			for (life = 0; life < size; life++)
		_putchar('#');
			if (love == size - 1)
				continue;
			_putchar('\n');
}
}
_putchar('\n');
}
