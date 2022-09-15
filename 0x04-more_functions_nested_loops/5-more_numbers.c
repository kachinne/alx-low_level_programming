#include "main.h"
/**
 * more_numbers - printing numbers well
 *
 * Return: Always 0
 *
 */
void more_numbers(void)
{
	int num, step;
	{
		for (num = 0; num <= 9; num++)
		{
			for (step = 0; step <= 14; step++)
			{
				if (step >= 10)
					_putchar((step / 10) + '0');
		_putchar((step % 10) + '0');
			}
		_putchar('\n');
	}
}
}
