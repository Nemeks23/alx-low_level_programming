#include "main.h"
/**
 * _isdigit - A function that checks for a digit
 * @c: This is for the integer
 * Return: Always 0
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

else
{
return (0);
}

}
