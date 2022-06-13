#include "main.h"
#include <stdio.h>

/**
* main - a program that prints the number of argument passed into it
* @argc: an argument counter
* @argv: an argument values
* Return: always 0 (succuss)
*/
int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}
