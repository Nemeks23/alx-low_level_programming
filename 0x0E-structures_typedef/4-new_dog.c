#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Create new data structure for dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Dog owner.
 *
 * Return: Pointer to new dog
**/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int len_name, len_owner;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

len_name = _strlen(name);
new_dog->name = malloc(sizeof(char) * len_name + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
len_owner = _strlen(owner);
new_dog->owner = malloc(sizeof(char) * len_owner + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->owner = _strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}

/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
*/
int _strlen(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
;
return (a);
}

/**
 * _strcpy - Copies a pointed string.
 * @dest: Pointer to the destine string.
 * @src: Pointer to the source string.
 * Return: The adress of the destiny string.
*/
char *_strcpy(char *dest, char *src)
{
int j = 0;

while (src[j] != '\0')
{
dest[j] = src[j];
j++;
}

dest[j] = '\0';
return (dest);
}
