#include "main.h"

/**
* _strstr - locate a substring
* @haystack: string
* @needle: string substring
* Return: Always 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
{
return (haystack);
}
}
return (0);
}
