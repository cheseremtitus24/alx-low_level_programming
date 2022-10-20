
#ifndef _MAIN_H_
#define _MAIN_H_
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/*Basic Helper Functions */
int _putchar(char c);
int _strlen_recursion(char *s);
int _strcmp(char *s1, char *s2);
int _strchr(char *s, int *scan_index, char c, int *counted);
char *scan_symbol_strchr(char *s, int *scan_index, char c, int *counted);
char *_strstr(char *haystack, char *needle);
void print_number(int n);
void _puts_recursion(char *s);
int _atoi(char *s);
/* turn on and off the scanning of forward slashes and percentage sign char's*/
void switch_off(short int *scan_flag);
void switch_on(short int *scan_flag);

/* End of Basic Helper Functions */

/* Main Functions Level 1*/
void _printf(char *fmt, ...);   /* '...' is C syntax for a variadic function */
char *_identify_datatype(char *fmt, int pos_percent_sign, char *datatype, int *end_replace_index); 

/* END OF Main Functions Level 1*/

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

typedef struct fs
{
    char *fs;
    void (*f)(int a);
} format_parser;

#endif /* _MAIN_H_ */
