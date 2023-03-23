#ifndef _POPPY_
#define _POPPY_

/**
 * dog_t: Typedef for struct dog
 *
 */

typedef struct dog dog_t;

/**
 * struct dog - structure
 * @name: name of dog
 * @age: age of dog
 * @owner: onwer of dog
 *
 * Description: dog struct containing name, age and owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
