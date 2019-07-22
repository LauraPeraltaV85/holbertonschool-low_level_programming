#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints struct dog
 *@d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if(d->name != NULL)
		printf("Name: %s\n", d->name);
	else 
		printf("Name: (nil)\n");
        printf("Age: %f\n", d->age);
	if(d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
