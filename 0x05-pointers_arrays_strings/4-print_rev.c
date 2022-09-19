#include "main.h"
/**
 * print_rev - Prints a string in reverse form
 * @s: parameter
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, length, temp;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		_putchar('\n');
}
}
