
#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int _strlen_recursion(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
void reverse_array(char a[63], int n);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

#endif /* _MAIN_H_ */
