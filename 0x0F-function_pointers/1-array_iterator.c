#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a.
 * parameter On each element of an array.
 * @array: Input integer array.
 * @size: Size of the array.
 * @action: Pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
