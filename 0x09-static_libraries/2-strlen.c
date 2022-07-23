#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 *
 * @s: This is the input string
 *
 * Return: Lenght of the string
*/

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0' ; i++);

return (i);
}
