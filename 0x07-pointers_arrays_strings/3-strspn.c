#include "main.h"
/**
 * _strspn - This function prints the consecutive characters of s1 thar are in s2
 * @s: This is the Source string
 * @accept: This is the searching string
 *
 * Return: New string
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (j = 0; *(s + j); j++)
{
for (i = 0; *(accept + i); i++)
{
if (*(s + j) == *(accept + i))
break;
}

if (*(accept + i) == '\0')
break;
}
return (j);

}
