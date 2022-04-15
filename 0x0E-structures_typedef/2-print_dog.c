#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
if (d == NULL)
return;
{
if (d->name == NULL)
printf("name: %s\n", "(nil)");
if (d->age == 0)
printf("age: %s\n", "(0)");
if (d->owner == NULL)
printf("owner: %s\n", "(nil)");

printf("name: %s\n", d->name);
printf("age: %f\n", d->age);
printf("owner: %s\n", d->owner);
return;
}
}
