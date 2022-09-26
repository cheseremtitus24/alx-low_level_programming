
#ifndef _MAIN_H_
#define _MAIN_H_
#include <string.h>
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_number(int n);
void set_string(char **s, char *to);
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

#endif /* _MAIN_H_ */
