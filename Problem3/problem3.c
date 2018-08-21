#include <stdio.h>
#include <math.h>

int main()
{
	long long  n = 600851475143;
	int factor = 2;
	int last_factor = 0;

	if (n % 2 == 0) {
		n = n/2;
		last_factor = 2;

		while (n % 2 == 0) {
			n = n/2;
		}
	}
	else
		last_factor = 1;

	factor = 3;

	while ( n > 1) {
		if (n % factor == 0) {
			last_factor = factor;
			n = n / factor;
			while (n % factor == 0) {
				n = n / factor;
			}
		}

		factor = factor + 1;
	}

	printf("Largest prime factor = %d\n", last_factor);
}
