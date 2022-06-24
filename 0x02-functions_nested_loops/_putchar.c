<<<<<<< HEAD
#​include​ ​<​unistd.h​>
/*​* ​* _putchar - writes the character c to stdout * @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appreciately
*/
int​ ​_putchar​(​char​ c) 
{
return​ (​write​(​1​, &c, ​1​));
=======
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the character to print
* Return: on success 1
* On error, -1 is returned, and errno is set appropriately
*/
int _putchar (char c)
{
return (write(1, &c, 1));
>>>>>>> 930c7c849a4de972cebfb244e3f952a4eb4b35ce
}
