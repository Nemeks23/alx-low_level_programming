#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *j;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

j = malloc(nmemb * size);

if (j == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
j[i] = 0;

return (j);
}
