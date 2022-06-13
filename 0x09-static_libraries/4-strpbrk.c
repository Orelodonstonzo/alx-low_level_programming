#include "main.h"

/**
* _strpbrk - search a string for any set of a set of bytes
* @s: string
* @accept: string to match
* Return: pointer to the bytes in 's' that matches one of the bytes in 'accept'
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[i] != '\0'; j++)
{
if (s[i] == accept[i])
{
return (s + 1);
}
}
}
return (0);
}
