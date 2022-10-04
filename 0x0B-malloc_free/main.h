#ifndef _MAIN_H_
#define _MAIN_H_
#include <string.h>
#include <stdlib.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
unsigned int _sizeof(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int _strlen_recursion(char *s);

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

#endif /* _MAIN_H_ */
