#include <string.h>
#include <stdio.h>

struct mystruct
{
	int i;
	int x;
	int y;
};

int main(void)
{
	int i;
	struct mystruct source, destination, copied;

	source.i = 1;
	source.x = 2;
	source.y = 3;

	memcpy(&destination, &source, sizeof(source));
	destination.i=4;
	copied = destination;
	copied.i=5;

	printf("Source \ni = %d, x = %d, y = %d\n", source.i, source.x, source.y);
	printf("Destination\ni = %d, x = %d, y = %d\n", destination.i, destination.x, destination.y);
	printf("Copied\ni = %d, x = %d, y = %d", copied.i, copied.x, copied.y);

	return (0);
}
