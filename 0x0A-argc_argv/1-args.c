#include <stdio.h>
/**
 * main - Write a program that prints the number of argument passed to it.
 *
 * @args: This is the argument count.
 * @argv: This is the argument vector.
 *
 * Return: Returns to zero.
*/

int main(int args, char *argv[])
{
printf("%d\n", args - 1);
(void)argv;
return (0);
}
