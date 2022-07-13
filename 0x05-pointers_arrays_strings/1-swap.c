#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: This is the first integer
 * @b: This is the second integer
 *
 *
*/

void swap_int(int *a, int *b)
{
int changes;

changes = *a;
*a = *b;
*b = changes;
}
