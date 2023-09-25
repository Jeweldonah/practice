#include <stdio.h>

int main(void)
{
	int x = 1;
	int y = (x < 5) ? 100 : 200;

	printf("x: %i\n", x);
	 printf("y: %i\n", y);
}
