#include "main.h"
#include <stdlib.h>

/**
 * create_array - It creates an array of characters and initializes 
 * it with a specific char
 * @size: Size of the array
 * @c: Char to initializes array with
 *
 * Return: Null if it fails or
 * pointer to an array
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);

/*To check if Malloc was successful*/
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
