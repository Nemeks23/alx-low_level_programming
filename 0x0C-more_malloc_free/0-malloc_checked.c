#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: Pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
char *j;
/*This function allocates using malloc*/
j = malloc(b);
if (j == NULL)
exit(98);
return (j);
}
