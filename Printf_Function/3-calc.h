#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <string.h>
int _putchar(char c);
void _puts_recursion(char *s);
void print_number(int n);
int _atoi(char *s);
int evaluate(int a, char *op, int b);


int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
int (*f)(int a, int b);
} op_t;

#endif /* _MAIN_H_ */
