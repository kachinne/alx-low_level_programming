#include "main.h"
/**
 * print_line - Drawing a straight line in the terminal
 * @n: Parameter
 * Return: Always 0
 */
void print_line(int n)
{
	int b = 0;

	if (n > 0)
	{
		while (b <= n)
		{
			_putchar('_');
			b++
		}
		_putchar('\n');
	}
	else
	{
		_putchat('\n');
