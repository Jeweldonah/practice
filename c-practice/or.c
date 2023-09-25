#include <stdio.h>

int main(void)
{
	int k = 7;
	int t = 8;
	int o = 6;

	int result = (k != t) || (t != o);

	printf("Result: %i\n", result);
}
