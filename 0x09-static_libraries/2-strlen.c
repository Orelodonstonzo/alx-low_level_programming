#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: char type variable
* Return: string length of a given string
*/

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
