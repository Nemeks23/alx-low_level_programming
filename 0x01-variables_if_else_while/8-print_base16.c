#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always to 0 (Congratulations)
*/

int main(void)
{

int numb;
char letter;

for (numb = 0; numb < 10; numb++)
{
putchar ((numb % 10) + '0');
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar (letter);
}

putchar ('\n');

return (0);

}
