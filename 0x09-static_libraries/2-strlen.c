#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Parameter
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
