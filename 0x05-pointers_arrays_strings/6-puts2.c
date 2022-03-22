#include "main.h"

/**
* put2 - function that prints every other character of a string, starting with the first character
* @str: the string to input
* 
* Return: void
*/
void put2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
{
_putchar(str[i]);
}
else
continue;
}
_putchar('\n');
}
