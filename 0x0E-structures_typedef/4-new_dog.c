#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of string
 * @s: evaluating string
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: pointer to the buffer where we copy a string
 * @src: string to be copied
 * Return: pointer to the buffer
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: input value name
 * @age: input value age
 * @owner: input value owner
 * Return: pointer to new created dog,
 *  else return NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x;
	int y;

	x = _strlen(name);
	y = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (x + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (y + 1));
	if (dog->owner == NULL)
	{
		free(dog);

		free(dog->name);

		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
