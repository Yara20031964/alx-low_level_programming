#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct name's dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dogs are better than cats
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif