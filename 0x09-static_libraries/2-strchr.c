#include "main.h"
/**
 * _strchr - This function locates a character in a string
 * @s: This is the string
 * @c: Character to search
 * Return: Pointer to the first occurance of the character c in the string
*/

char *_strchr(char *s, char c)
{
while (*s != '\0') /*Declaring the while statement*/
{
if (*s == c) /*If s == c*/
{
return (s); /*Return s*/
}
++s;
}

if (*s == c)
{
return (s);
}
return (0); /*Null value*/

}
