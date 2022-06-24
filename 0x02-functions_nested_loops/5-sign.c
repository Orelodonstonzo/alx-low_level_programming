#include "main.h"

/**
* print_sign - function prints out the sign of number
* @n: the number to be inputed
* Return: 1 if greater than 0, 0 if 0
* and -1 if less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else if (n < 0)
_putchar('-');
return (-1);
}