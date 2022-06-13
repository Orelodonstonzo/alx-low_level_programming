#include "main.h"
<<<<<<< HEAD
/**
* main - using the _putchar function
* to print out strings
* Return: 0
*/
int main(void)
{
int i = 0;
char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};

while (ch[i] != '\0')
{
_putchar (ch[i]);
i++;
}
_putchar  ('\n');
=======

/**
* main - check the code for ALX School students
* Program that prints _putchar, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
char s[] = "_putchar";
int i = 0;

while (s[i] != 0)
{
_putchar (s[i]);
i++;
}
_putchar (10);
>>>>>>> 930c7c849a4de972cebfb244e3f952a4eb4b35ce
return (0);
}
