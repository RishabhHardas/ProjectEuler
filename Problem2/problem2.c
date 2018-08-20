#include <stdio.h>

int main()
{
	unsigned int a, b, next, sum;

	a = 1;
	b = 2;
	next = 0;
	sum = 0;

	while (a < 4000000) {
		if (a % 2 == 0)
			sum = sum + a;

		next = a + b;
		a = b;
		b = next;
	}

	printf("Sum = %d\n", sum);
}
