#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data structure
 * @name: the dog's name (cstring)
 * @owner: the dog's owner name (cstring)
 * @age: the dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
