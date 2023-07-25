#include "dog.h"
#include <stdio.h>
/**
* print_dog-print a string, followed by a new line
*@age:input
*@owner:input
*@name:input
*@d:input
*Return: Always 0 (Success)
*/

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
