/**
 * reset_to_98 - sets value of an integer variable to 98
 * @n: integer variable to modify
 * Description- Modifies a pass by reference value integer variable
 * Return - void
 */

void reset_to_98(int *n)
{
	/* int *n - pointer declaration */
	int *ip;
	/* assign value of pointer - contains address of passed in int n */
	ip = n;

	/*Dereference our local integer pointer to assign a new value to n*/
	*ip = 98;
}
