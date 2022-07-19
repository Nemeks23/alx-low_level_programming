#include "main.h"
/**
 * _strpbrk - Prints the consecutive characters of s1 that are in s2
 * @s: This is the Source string
 * @accept: This is the searching string
 *
 * Return: null value
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
break;
}
}

if (*(accept + j) != '\0')
{
return (s + i);
}

return (0);
}
