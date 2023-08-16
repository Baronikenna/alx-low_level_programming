#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to struct dog
 *
 * Description: This function prints the details of a struct dog,
 * including its name, age, and owner. If an element is NULL,
 * it will print "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
