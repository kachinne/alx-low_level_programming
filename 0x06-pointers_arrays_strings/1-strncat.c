#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @dest: Parameter one
 * @src: Parameter two
 * @n: Parameter three
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int spark = 0, length = 0;

while (dest[spark++])
length++;
for (spark = 0; src[spark] && spark < n; spark++)
dest[length++] = src[spark];
return (dest);
}
