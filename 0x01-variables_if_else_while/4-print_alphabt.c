#include <stdio.h>
/**
 * main - Prints all the letters except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char look;

	for (look = 'a'; look <= 'z'; look++)
	{
		if (look != 'q' && look != 'e')
			putchar (look);
	}
	putchar('\n');
	return (0);
}

