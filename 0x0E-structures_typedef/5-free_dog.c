#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog_t structure.
* @d: Pointer to the dog_t structure to free.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the memory for the name and owner strings */
free(d->name);
free(d->owner);

/* Free the memory for the dog_t structure itself */
free(d);
}
}
