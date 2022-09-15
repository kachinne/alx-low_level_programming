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
		while (n <= 0)
		{
			_putchar('_');
			n++
		}
		_putchar('\n');
	}
	else
	{
		_putchat('\n');
