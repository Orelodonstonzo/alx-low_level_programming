#include "main.h"
/**
* printc - print a char
* @pa: format of char
* @format: format
* return: number of char for printf
*/
int printc(char *format, va_list pa)
{
(void)format;
_putchar(va_arg(pa, int));
return (1);
}
