#include "main.h"
/**
 * _memset - It's a Function that fills memory with a constant byte
 * @s: This is the source string
 * @b: The constant byte for filling
 * @n: Length of buffer
 * Return: New string
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}

return (s);

}
