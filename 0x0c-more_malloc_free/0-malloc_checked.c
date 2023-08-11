#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         Exits with status EXIT_FAILURE if allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)

	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(98);
	}
	return (ptr);
	/* fuck return */
}
