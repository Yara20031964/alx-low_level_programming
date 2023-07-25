#include <dog.h>

/**
*init_dog-print a string, followed by a new line
*@age:input
*@owner:input
*@name:input
*@d:input
*Return: Always 0 (Success)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
#endif
