#include "main.h"
/**
 * string_toupper - It changes all Lower case letter of a string to upper case
 * @str: String
 * Return: Returns char
*/

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}

return (str);
}
