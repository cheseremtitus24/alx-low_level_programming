#include <stdio.h>

typedef void (*printer_t)(int);
/**
 * print_to_n: ouputs integers from 0 to n
 * @n: count to n
 * 
 * Description: prints from 0-n n is included.
 * 
 * Returns: void
 */

void print_to_n(int n)
{
	int i;

	for (i = 0; i <= n; ++i)
	{
		printf("%d\n", i);
	}
}

void nafoo(void (*printer)(int), int y)
{
	/*code*/
	(*printer)(y);
	/*code*/
}

void foo(printer_t printer, int y)
{
	/*code*/
	printer(y);
	/*code*/
}

int main(void)
{
	 printf("Using the typedef method of function pointers \n");
	 /* Declaring a typedef */
	/*typedef void (*printer_t)(int);*/

	/* assigning a function address to out typedef'd variable p*/
	 printer_t p = &print_to_n;
	 /* Calling print_to_n function*/
	 p(5);
	 printf("Using the traditional method of function pointers \n");

	 void (*p2)(int) = &print_to_n;
	 (*p2)(5);

	 printf("calling Traditional function\n");
	 nafoo(p2,6);
	 printf("calling Typedef'd function\n");
	 foo(p,7);

	 return 0;
}



