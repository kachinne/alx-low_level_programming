#include "main.h"
/**
 * isalpha(int c) - Function that checks for alphabet
 * @c: parameter
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
