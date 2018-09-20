#include <stdio.h>

int main()
{
        unsigned int square = 0;
        unsigned int square1 = 0;
        int i = 0;

        for (i=1; i <=100; i++) {
                square = square + (i*i);
        }

        for (i=1; i <= 100; i++) {
                square1 = square1 + i;
        }

        square1 = square1 * square1;

        printf("%u\n", square1 - square);


}
