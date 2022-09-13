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

	for (num = 'a'; num <= 'z'; num++)
	{
		for (num1 = 1; num1 <= 10; num1++)
		{
			_putchar(num);
		}
_putchar('\n');
	}
return (0);

}
