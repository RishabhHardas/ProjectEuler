#include <stdio.h>

int main()
{
	unsigned int num1 = 1000;
	unsigned int num2 = 999;
	unsigned int product = 0;
	unsigned int reverse_product = 0;
	unsigned int orig_product = 0;
	unsigned int max_palin = 0;

	while (num1-- > 1){
		num2 = 1000;
		while(num2-- > 0) {
			product = num1 * num2;
			orig_product = product;

			while (product != 0) {
				reverse_product = (reverse_product*10) + (product%10);
				product = product/10;
			}

			if(orig_product == reverse_product) {
				if(orig_product > max_palin)
					max_palin = orig_product;
			}

			reverse_product = 0;
			

		}
	}

	printf("Largest Palindrome Product = %u\n", max_palin);
}
