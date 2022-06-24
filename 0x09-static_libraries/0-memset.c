#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: buffer array
* @b: constant byte
* @n: number of bytes of memory area to fill
* Description: fill the first 'n' bytes of the memory area pointed to by 's'
* with the constant bytes 'b'
* Return: pointer to memory area 's'
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
