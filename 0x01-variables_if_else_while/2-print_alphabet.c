#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point, prints the letters of
* the alphabet in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch;

for (ch = "a" ; ch <= "z" ; ch++)
{
putchar (ch);
}
putchar("\n");
return (0);
}
