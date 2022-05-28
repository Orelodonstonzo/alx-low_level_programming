#include "main.h"
#include <stdarg.h>
/**
* printpercent - print %
* @format: format
* @pa: va_list
* return: number of characters printed
*/
int printpercent(char *format, va_list pa)
{
(void)format;
(void)pa;
_putchar ('%');
return (1);
}
