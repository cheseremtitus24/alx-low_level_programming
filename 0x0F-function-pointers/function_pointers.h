#ifndef _MAIN_H_
#define _MAIN_H_
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

#endif /* _MAIN_H_ */
