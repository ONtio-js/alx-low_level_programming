#ifndef _dog_h
#define _dog_h
/**
 * struct dog - Struct type
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * struct dog_t - Struct type
 * @name: name
 * @age: age
 * @owner: owner
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
