#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct do
 * main - gzysfyuxf
 * @d: Pointer to struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the members of a struct dog with
 * provided values for name, age, and owner.
 * Return: gugbuugo
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
