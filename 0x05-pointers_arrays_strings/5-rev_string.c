#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: parameter
 *
 * Return: Always 0
 */
void rev_sting(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
