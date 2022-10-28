#include <stdio.h>

int main(void)
{
	int X = 9;
	int Y = 10;

	int *ptr1, *ptr2, *temp;

	ptr1 = &X;
	ptr2 = &Y;

	printf("X = %d, Y = %d\n", *ptr1, *ptr2);

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("After Swiping the Pointers \n");

	printf("X = %d, Y = %d\n", *ptr1, *ptr2);

	return (0);
}




