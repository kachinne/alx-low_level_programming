#include "main.h"
/**
 * _strcpy - Function that copies
 * @dest: parameter first
 * @src: parameter second
 *
 * Return: Always o
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
