#ifndef STRTYP
#define STRTYP
/**
 * struct dog - structure of a dog.
 * @age: age of dog
 * @owner: ownwer of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, char *owner);
void print_dog(structdog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*STRTYP*/
