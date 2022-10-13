#include <stdio.h>

/**
 * fun- prints the value of a parameter argument
 * @a: integer value
 *
 * Description: outputs the value of parameter
 * Return: void
 */

void fun(int a)
{
	printf("Value of a is %d\n", a);
}


/**
 * main- Program Entry
 *
 * Description: Implements use of function pointers
 * Return: 0 on Success
 */
int main(void)
{
	/* fun_ptr is a pointer to function fun() */
	void (*fun_ptr)(int) = &fun;

	/**
	 * Equivalent to
	 * void (*fun_ptr)(int);
	 * fun_ptr = &fun;
	 */

	/* Invoking fun() using fun_ptr */
	(*fun_ptr)(10); /* outputs: Value of a is 10*/
	

	/**
	 * Alternatively
	 * A function's name can be used to get a function's address
	 * Thus it is possible to assign without need of using 
	 * (&) address operator
	 */
	void (*fun_ptr_No_address_operator)(int) = fun;
	fun_ptr(20);

	return (0);
}

