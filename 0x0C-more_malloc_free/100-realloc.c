#include “main.h”
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previously allocated with malloc
* @old_size: Size of the allocated space for ptr
* @new_size: New size of the memory block
*
* Return: Pointer to the reallocated memory block
*         If new_size is zero, returns NULL and frees ptr
*         If malloc fails, returns NULL and frees ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
free(ptr);
return (NULL);
}

if (new_size > old_size)
new_size = old_size;

for (unsigned int i = 0; i < new_size; i++)
new_ptr[i] = *((char *)ptr + i);

free(ptr);
return (new_ptr);
}
