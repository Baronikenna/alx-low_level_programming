#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function exits with status value 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	else
	return (ptr);
}
