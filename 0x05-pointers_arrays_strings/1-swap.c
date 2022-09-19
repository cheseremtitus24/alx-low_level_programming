/**
 * swap_int- Swaps 2 integer variable values
 * @a: integer variable to swap
 * @b: integer variable to swap
 * Description- Swaps  pass by reference integer variable values
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}
