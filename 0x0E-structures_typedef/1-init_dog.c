#include "dog.h"

/**
 * init_dog -a function to  initialize a variable of type struct dog.
 * @d: struct to intialize, of type char
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: No.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
