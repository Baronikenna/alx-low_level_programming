#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: This structure defines a dog's attributes including i
 * age, and owner.
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif