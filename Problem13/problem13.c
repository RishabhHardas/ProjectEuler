#include <stdio.h>

#define SOLUTION_LENGTH 60

//100x50 2D Array to store all the numbers
char numbers[100][50] = {0x00};
char summation[SOLUTION_LENGTH] = {0x00};

int main ()
{
	int itr_row = 0;
	int itr_col = 0;
	int sum = 0;
	int carry = 0;
	int trail = 0;
	
	FILE *number_file = fopen("prob13_numbers.txt", "r");
	if (number_file == NULL) {
		printf("Could not open file!\n");
		return -1;
	}

	//Reading Numbers
	for (itr_row=0; itr_row < 100; itr_row++) {
		fscanf(number_file, "%s", numbers[itr_row]);
	}

/*	for (itr_row=0; itr_row<100; itr_row++) {
		printf("%d. ", itr_row+1);
		for (itr_col=0; itr_col<50; itr_col++) {
			printf("%d",numbers[itr_row][itr_col]-48);
		}
		printf("\n");
	}
*/

	//Add the numbers!
	for(itr_col = 49; itr_col >= 0; itr_col--) {
		
		sum = sum + carry;
		
		for (itr_row=0; itr_row < 100; itr_row++) {
			sum = sum + (numbers[itr_row][itr_col]-48);
		}

		carry = sum/10;
		summation[itr_col+10] = sum%10;
		trail = sum;
		sum = 0;
		
	}

	trail = trail/10;
	itr_col = 9;
	while(trail%10 != 0) {
		summation[itr_col] = trail%10;
		trail = trail/10;
		itr_col--;
	}

	itr_col = 0;
	while(itr_col++ < SOLUTION_LENGTH) {
		if(summation[itr_col] != 0)
			break;
	}
	for (; itr_col< SOLUTION_LENGTH; itr_col++) {
			printf("%d", summation[itr_col]);
	}
	printf("\n");

	fclose(number_file);
}
