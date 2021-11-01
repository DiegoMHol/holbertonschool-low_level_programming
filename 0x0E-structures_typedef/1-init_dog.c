#include "dog.h"
#include <stdio.h>
/**
*init_dog -initialize a variable of type structure
*@d: structure
*@name: char
*@age: float
*@owner: char
*Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
