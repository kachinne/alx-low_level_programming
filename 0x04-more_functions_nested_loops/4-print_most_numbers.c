#include "main.h"
/**
 * print_most_numbers - Printing numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}

