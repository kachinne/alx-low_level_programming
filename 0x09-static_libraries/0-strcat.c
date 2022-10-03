#include "main.h"
/**
 * *_strcat - Function to concatenate two strings
 * @dest: Parameter one
 * @src: Parameter two
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int spark = 0, length = 0;

while (dest[spark++])
	length++;
for (spark = 0; src[spark]; spark++)
	dest[length++] = src[spark];
return (dest);
}
