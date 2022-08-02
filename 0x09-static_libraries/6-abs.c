#include "main.h"
/**
 * _abs - funtion that prints an absolute value of number
 * @n: takes in an integer
 * Return: 1 if greater than 0, 0 ifzero and-1 if less than 0
*/
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
return (n);
}
