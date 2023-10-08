#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: one non-negative integer parameter
 * Return: 98 if malloc_checked failed
 */

void *malloc_checked(unsigned int b)
{
	char *newnode;

	newnode = malloc(b);
	if (!newnode)
		exit(98);
	return (newnode);
}
