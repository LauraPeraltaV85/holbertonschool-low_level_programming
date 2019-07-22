#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initialize variable of type struct dog
 *@d: struct
 *@name: dogs name
 *@age: dogs age
 *@owner: dog owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
