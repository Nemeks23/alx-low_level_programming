#include "main.h"
/**
 * _puts_recursion - It prints a string followed by a new line
 * @s: Pointer to string
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
if (*s == '\0') /*Base case*/
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion (s + 1);

}
