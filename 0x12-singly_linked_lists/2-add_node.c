#include <stdlib.h>
#include "lists.h"
/**
 * add_node- adds nodes to beginning of linked list
 * @head: a pointer to a linked list head
 * @str: initializer node element string
 * Description: Attaches nodes to the beginning of Linked list
 * and initializes the len of list to the length of the string
 *
 * Return: address of new  nodes else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int slen, *ptr;
	char *temp;
	list_t *new;

	if (head == NULL)
		return (NULL);

	slen = 0;
	ptr = &slen;
	temp = _strdup(str, ptr);

	/* if temp is null means it failed to allocate heap memory*/
	if (!temp)
		return (NULL);

	/* else assign values to the a new node */
	new = malloc(sizeof(list_t));
	/**
	 * check to ensure that malloc allocation of memory is
	 * successful
	 */
	if (!new)
		return (NULL);

	new->str = temp;
	new->len = slen;
	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * _strdup- duplicates a string
 * @str: String to be duplicated
 * @ptr: Integer pointer variable to update string length
 *
 * Description- Dynamically allocates memory in heap and saves and returns a
 * copy of the input string str
 *
 * Return: char pointer else NULL
 */

char *_strdup(const char *str, int *ptr)
{
	int i;
	int strsize;
	char *dynmemptr;

	if (str == NULL)
		return (NULL);
	strsize = _sizeof(str);

	dynmemptr = (char *) malloc((sizeof(char) * strsize) + 1);

	if (dynmemptr == NULL)
		return (NULL);

	for (i = 0; i < (int)(sizeof(char) * strsize) ; i++)
		dynmemptr[i] = *str++;
	dynmemptr[i + 1] = '\n';

	/* update the pointer to assign length of string*/
	*ptr = strsize;

	return (dynmemptr);

}

/**
 * _sizeof- finds the length of a string
 * @s: String to find the length
 *
 * Description- Returns the length of a string less the null pointer '\0'
 *
 * Return: positive integer
 */
unsigned int _sizeof(const char *s)
{
	int i = 0;
	int count = 0;

	for (; s[i] != '\0'; i++)
		count++;

	if (count < 1)
		return (0);

	return (count);
}


