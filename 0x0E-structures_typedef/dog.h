#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is the structure that defines dog
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 * dog_t *new_dog(char *name, float age, char *owner);
 * void free_dog(dog_t *d);
 */

#endif
