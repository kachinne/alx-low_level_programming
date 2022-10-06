#include "main.h"
/**
 * malloc_checked - allocation of memory
 * @b: Parameter one
 *
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *ant;

	ant = malloc(b);
		if (b == NULL)
		exit(98);
	return (ant);
}
