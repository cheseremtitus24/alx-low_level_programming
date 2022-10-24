
#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_number(int n);
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif /* _MAIN_H_ */
