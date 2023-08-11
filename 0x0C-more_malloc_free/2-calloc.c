#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates meminitializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 * Return:zed memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/*
	 *  Use memset to set the allocated memory to zero.
	 * The size arize of the array (nmemb * size).
	 * This es all elements are set to zero
	 *
	 */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
