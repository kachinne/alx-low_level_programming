#include "main.h"
/**
 * reset_to_98 - takes a pointer to update a value
 * @n: parameter
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int n;
	int *ptr;
	
	n = 98;
	ptr = &n;	
	_putchar(ptr);
}
