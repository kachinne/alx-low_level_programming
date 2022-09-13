#include "main.h"
/**
 * print_alphabet_x10 - Printing a function in lowercase
 *
 * Return: ALways 0
 */
void print_alphabet_x10(void)
{
	int num;
	int num1;

	for (num = 1; num <= 10; num++)
	{
		for (num1 = 'a'; num1 <= 'z'; num1++)
		{
			_putchar(num1);
		}
_putchar('\n');
	}


}
