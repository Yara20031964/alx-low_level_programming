#ifndef DOG_H
#define DOG_H

/**
*struct dog-print a string, followed by a new line
*@age:input
*@owner:input
*@name:input
*Return: Always 0 (Success)
*/

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
