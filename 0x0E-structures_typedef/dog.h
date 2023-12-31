#ifndef __ABEST__
#define __ABEST__

/**
 * struct dog - a function that takes in 3 arguments which are:
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This give the type an owner of such dog
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
 * dog_t - typedef with the name dog_t
 * Description: This give the struct dog a new data type dog_t
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
