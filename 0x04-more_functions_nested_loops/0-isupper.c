#include "main.h"
/**
 * _isupper - Prints uppercase
 * @c: Parameter
 *
 * Return: Always 0
 */
int _isupper(int c);
{
	int c;

	if (c > 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
