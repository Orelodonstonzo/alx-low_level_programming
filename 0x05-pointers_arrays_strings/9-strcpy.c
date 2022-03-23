#include "main.h"

/**
* _strcpy - a function that copies the string
* pointed by a variable to another variable
* @dest: variable to copy to
* @src: variable to copy from
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i, j;
i = 0;
while (src[i] != '\0')
{
i++;
}

for (j = 0; j <= i; j++)
{
*(dest + j) = *(src + j);
}

return (dest);
}
