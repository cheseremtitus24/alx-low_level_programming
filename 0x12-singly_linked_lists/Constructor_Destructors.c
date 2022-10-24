#include <stdio.h>

void before_main(void) __attribute__((constructor));
void after_main(void) __attribute__((destructor));


void before_main(void)
{
	printf("About to execute Main \n");
}

void after_main(void)
{
	printf("\nMain has Terminated");
}

int main(void)
{
	printf("Hello Kenya");
	return (0);
}
