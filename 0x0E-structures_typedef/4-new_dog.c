#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new dog.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Pointer to the newly created dog_t, or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

/* Allocate memory for the dog_t structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Make copies of the name and owner strings */
name_copy = strdup(name);
owner_copy = strdup(owner);

/* Check if strdup failed to allocate memory for the copies */
if (name_copy == NULL || owner_copy == NULL)
{
free(new_dog);
free(name_copy);
free(owner_copy);
return (NULL);
}

/* Set the values for the new dog_t */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
