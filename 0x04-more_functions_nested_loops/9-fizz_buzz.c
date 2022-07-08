#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
int h = 100;
int p;

p = 1;
while (p <= h)
{
if (p % 3 == 0 && p % 5 == 0)
{
printf("FizzBuzz ");
}

else if (p % 3 == 0)
{
printf("Fizz ");
}

else if (p % 5 == 0)
{
if (p < h)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%p ", p);
}

p++;

}
printf('\n');
return (0);
}
