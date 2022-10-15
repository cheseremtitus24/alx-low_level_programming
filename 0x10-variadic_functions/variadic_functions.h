
#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *format, ...);   /* '...' is C syntax for a variadic function */
void retval(void);
int _putchar(char c);
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

#endif /* _MAIN_H_ */
