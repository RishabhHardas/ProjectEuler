#include <stdio.h>

int main()
{
        long int number = 2520;
        int i = 1;

        while(number) {

                for (i = 1; i <= 20; i++) {
                        if ( number%i == 0)
                                continue;
                        else
                                break;
                }

                if(i == 21) {
                        printf("%ld\n", number);
                        break;
                }
                else
                        number++;
        }

        return 0;
}
