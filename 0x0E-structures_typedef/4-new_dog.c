#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new user
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer to struct if success, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *sd;
	int n, o, p, q;

	sd = malloc(sizeof(dog_t));

	if (sd == NULL)
		return (NULL);

	for (n = 0; name[n] != '\0'; n++)
		;
	sd->name = malloc(sizeof(char) * (n + 1));
	if (sd->name == NULL)
	{
		free(sd);
		return (NULL);
	}
	sd->age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	sd->owner = malloc(sizeof(char) * (o + 1));
	if (sd->owner == NULL)
	{
		free(sd->name);
		free(sd);
		return (NULL);
	}
	for (p = 0; p <= n; p++)
		sd->name[p] = name[p];
	for (q = 0; q <= o; q++)
		sd->owner[q] = owner[q];
	return (sd);
}

