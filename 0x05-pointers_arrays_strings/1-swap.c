/**
 * swap_int- Swaps 2 integer variable values
 * @a: integer variable to swap
 * @b: integer variable to swap
 * Description- Swaps  pass by reference integer variable values
 * Return - void
 */

void swap_int(int *a, int *b)
{
	/* int * - pointer declaration */
	int *ip1;
	int *ip2;
	int tmp;
	/* assign value of pointer - contains address of passed in int a,b */
	ip1 = a;
	ip2 = b;

	/*Dereference our local integer pointers to swap values*/
	tmp = *ip1;
	*ip1 = *ip2;
	*ip1 = tmp;
}
