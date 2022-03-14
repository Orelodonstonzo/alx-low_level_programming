#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
/**
 ​* main - Entry point
 ​*
 ​*Return: Always 0 (Success)
 */
int main(void)
{
                     int n;
                     
                     srand(time(0)) ;
                     n = rand( ) - RAND_MAX / 2 ;
                     if (n > 0)
                     {
                               printf("%d is positive\n", n) ;
                     }
                     else if (n < 0)
                     {
                               printf(" %d is negative\n", n) ;
                     }
                     else
                     {
                              printf(" %d is zero\n", n) ;
                     }
                     return (0) ;
}

#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
/**
 ​* main - Entry point
 ​*
 ​*Return: Always 0 (Success)
 */
int main(void)
{
                     int n;
                     
                     srand(time(0)) ;
                     n = rand( ) - RAND_MAX / 2 ;
                     if (n > 0)
                     {
                               printf(%d is positiven, n) ;
                     }
                     else if (n < 0)
                     {
                               printf( %d is negativen, n) ;
                     }
                     else
                     {
                              printf( %d is zeron, n) ;
                     }
                     return (0) ;
}
' >> 0-positive_or_negative.c



0-positive_or_negative.c
cd alx-low_level_programming
cd 0x01-variables_if_else_while


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 *  * it executes, and prints it
 * Return: Always 0 (Success)
 *  */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf(%d is positiven, n);
    else if (n == 0)
        printf(%d is zeron, n);
    else if (n < 0)
        printf(%d is negativen, n);
    return (0);
}

