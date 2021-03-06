#include "main.h"

/**
*_strncat - function that concatenates two strings
* @dest: strings
* @src: strings
* @n: number of element to concatenate in
* Return: a pointer to the resulting 'dest'
*/
char *_strncat(char *dest, char *src, int n)
{
int i, c;

for (i = 0; dest [i] != '\0'; i++);
for (c = 0; src[c] != '\0' &&n > 0; c++, n--, i++)
{
dest[i] = src[c];
}
return(dest);
}
