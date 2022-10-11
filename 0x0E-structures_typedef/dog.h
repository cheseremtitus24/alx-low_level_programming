#ifndef _MAIN_H_
#define _MAIN_H_
#include <string.h>


/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

/**
 * struct dog- Holds details pertaining to a dog
 * @name: Identifying name
 * @age: Age of member
 * @owner: Name of member owner
 *
 * Description: This structure holds identifying details of a pet dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *ptr, char *pname, float page, char *powner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _MAIN_H_ */
