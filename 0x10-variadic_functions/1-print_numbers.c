#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: no return.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;

va_start(valist, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, int));
if (separator && i < n - 1)
printf("%s", separator);
}


printf("\n");
va_end(valist);


}
