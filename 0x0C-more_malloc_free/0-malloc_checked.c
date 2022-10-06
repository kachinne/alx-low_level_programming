#include "main.h"
/**
 * malloc_checked - allocation of memory
 * @b: Parameter one
 *
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
		if (b == 0)
		exit(98);
	return (p);
}
