#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

#define NUMBER_LIMIT 150000

int prime_counting(int num);
void sieve(int p_index, int *array);

int main()
{
  int p=2;
  int i = 0;
  int *numbers = NULL;
  
  prime_counting(NUMBER_LIMIT);

  numbers = (int *)malloc(NUMBER_LIMIT*sizeof(int));
  
  //Fill the array with numbers
  while (i < NUMBER_LIMIT) {
    numbers[i] = i+1;
    i++;
  }

  numbers[0] = 0;//Remove 1 

  i = 0;
  while (numbers[i] != p) {
    i++;
  }

  while ( i < NUMBER_LIMIT) {

    sieve(i, numbers);
    while ((numbers[i] <= p) && (i < NUMBER_LIMIT)){
      i++;
    }

    p = numbers[i];

   }
  
  i = 0;
  int count = 0;
  while(i < NUMBER_LIMIT) {
    if(numbers[i] != 0) {
      count++;
      if(count == 10001)
	printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    i++;
  }
  free(numbers);
}

int prime_counting(int num)
{
	int number_of_primes = num/log(num);
	printf("Number of primes less than or equal to %d is %d\n", num, number_of_primes);
}

void sieve(int p_index, int *array)
{
  int itr = p_index;
  while(itr < NUMBER_LIMIT){
    itr += array[p_index];
    if(itr > NUMBER_LIMIT)
      break;
    array[itr] = 0;
  }
}
