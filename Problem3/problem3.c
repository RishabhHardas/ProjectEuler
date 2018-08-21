#include <stdio.h>
#include <math.h>

int main()
{
	long long  n = 600851475143;
	int factor = 2;
	int last_factor = 0;
	long long max_factor = 0;

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
	max_factor = (long long) sqrt(n);
	//printf("Max Factor = %d\n", max_factor);
	while (( n > 1) || (factor <= max_factor)) {
		if (n % factor == 0) {
			last_factor = factor;
			n = n / factor;
			while (n % factor == 0) {
				n = n / factor;
			}

			max_factor = (long long) sqrt(n);
		}

		factor = factor + 2;
	}
	if (n == 1)
		printf("Largest Prime Factor = %d\n", last_factor);
	else
		printf("Largest prime factor = %lld\n", n);
}
