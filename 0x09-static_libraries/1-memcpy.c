#include "main.h"
/**
 * _memcpy - This fills memory with another buffer
 * @dest: This is the string for filling
 * @src: This is the source string
 * @n: This is the Length of buffer
 * Return: New string
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
