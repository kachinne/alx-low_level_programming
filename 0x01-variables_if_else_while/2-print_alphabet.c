#include <stdio.h>
/**
 * main - Prints the alphbet in lowercase
 * Return: Always 0;
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	putchar ('\n');

return (0);
}
