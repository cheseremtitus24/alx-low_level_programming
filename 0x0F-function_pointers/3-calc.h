#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
void _puts_recursion(char *s);
void print_number(int n);
int _atoi(char *s);
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
