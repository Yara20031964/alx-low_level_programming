#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string
 *
 * Return: length of @str
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _strcopy - a function that return copy string
 *
 * @src: string to copy
 * @des: copy string
 * Return: @des
 */
char *_strcopy(char *des, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		des[i] = src[i];
	des[i] = '\0';
	return (des);
}
/**
 * new_dog - a function
 *
 * @name: name of dog
 * @age :age
 * @owner: owner
 * Return: struct or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}




