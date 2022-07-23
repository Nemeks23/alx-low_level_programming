#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints all the arguments a program receives.
 *
 * @argc: Number of arguments.
 *
 * @argv: This is the Array of arguments.
 *
 * Return: Always (0) Completed.
*/

int main(int argc, char *argv[])
{
int n;

for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}

return (0);

}
