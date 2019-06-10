#include <stdio.h>

int print_factors(int num);
int print_triangle_number(int triangle_no);

/*
TODO: Use the sqrt mwthod. This is very slow
*/
int main()
{
	int input = 12000;//Arbit. number
	int current_tri_number = 0;
	int number_of_factors = 0;
	while(input++) {
		current_tri_number = print_triangle_number(input);

		number_of_factors = print_factors(current_tri_number);

		if(number_of_factors > 500) {
			printf("%d\n", current_tri_number);
			return 0;
		}
	}
}

int print_factors(int num)
{
	int div = 1;
	int count = 0;
	while (div <= num) {
		if(num%div == 0) {
			count++;
		}
		div++;
	}
	return count;
}

int print_triangle_number(int triangle_no)
{
	int i = 1;
	int result = 0;
	if(triangle_no == 0)
		return 0;

	while (i <= triangle_no) {
		result += i;
		i++;
	}

	return result;
}
