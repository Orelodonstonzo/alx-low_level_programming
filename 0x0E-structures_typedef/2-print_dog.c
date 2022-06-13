#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
{
printf("name: %s\n", "(nil)");
}
else
{
printf("name: %s\n", d->name);
}
if (d->age <= 0.0)
{
printf("age: %f\n", 0.0);
}
else
{
printf("age: %f\n", d->age = 0.0);
}
if (d->owner == NULL)
{
printf("owner: %s\n", "(nil)");
}
else
{
printf("owner: %s\n", d->owner);
}
return;
}
