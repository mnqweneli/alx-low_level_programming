#include <stdio.h>
#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Description,function that calls the new struct data type
 * @name: first memeber
 * @age: second member
 * @owner: third memeber
 *
 * Description: combines the char and float data items into one
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new type name for the struct dog
 *
 */
typedef struct dog dog_t;

#endif
