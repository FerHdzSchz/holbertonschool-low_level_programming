#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
 * struct dog - structure for dog
 * @name: mame of dog
 * @age: age of dog
 * @owner: name of the owner
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
