#include "main.h"
/**
 * print_rev - Prints a string in reverse form
 * @s: parameter
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
int spark = 0;

while (spark >= 0)
{
	if (s[spark]=='\0')
		break;
	spark++;
}
for (spark--; spark >= 0; spark--)
		_putchar(s[spark]));
	_putchar('\n');
}
