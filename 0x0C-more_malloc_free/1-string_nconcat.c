#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *geek;
unsigned int ls1, ls2, lsout, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (ls1 = 0; s1[ls1] != '\0'; ls1++)
;

for (ls2 = 0; s2[ls2] != '\0'; ls2++)
;

if (n > ls2)
n = ls2;

lsout = ls1 + n;

geek = malloc(lsout + 1);

if (geek == NULL)
return (NULL);

for (i = 0; i < lsout; i++)
if (i < ls1)
geek[i] = s1[i];
else
geek[i] = s2[i - ls1];

geek[i] = '\0';
return (geek);
}
