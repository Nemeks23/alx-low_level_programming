#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size, in bytes, of the allocated space of ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
ptr = malloc(new_size);
}

if (new_size == old_size)
{
return (ptr);
}

/*Reallocating Memory Block using Malloc and Free*/
free(ptr);
ptr = malloc(new_size);

return (ptr);
}
