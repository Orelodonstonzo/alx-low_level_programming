#include "main.h"

/**
* _strcat - appends by src
* @dest: string to append by src
* @src: string to append to dest
* Return: address of dest
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (*(dest + 1))
i++;
while ((*(dest + 1) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
