#include "main.h"
#include <stdlib.h>
/**
 * _strdup - This returns a pointer to a newly allocated
 * space in memory which contains a copy of the string
 * passed.
 * @str: This is the pointer to the string being
 * duplicated.
 *
 * Return: NULL if str is NULL.
 * Pointer to duplicated str on success
 * Null if memory was insufficient
*/

char *_strdup(char *str)
{
char *nstr:
unsigned int meks, i;

/*Checking if str is NULL*/
if (str == NULL)
{
return (NULL);
}

meks = 0;
while (str[meks] != '\0')
{
meks++;
}

nstr = malloc(sizeof(char) * (meks + 1));
/*Checking if Malloc was successful*/
if (nstr == NULL)
{
return (NULL);
}

for (i = 0; i < meks; i++)
{
nstr[i] = str[i];
}

nstr[meks] = '\0';
return (nstr);
}
