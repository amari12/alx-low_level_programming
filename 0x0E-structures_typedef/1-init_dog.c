#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *init_dog - initialise variable of type struct dog
 *@d: dog
 *@name: dog name
 *@age: dog age
 *@owner: owner name
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*struct dog d1;*/
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
