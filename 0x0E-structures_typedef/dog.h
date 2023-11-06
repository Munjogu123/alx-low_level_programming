#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - contains the characteristics of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
