#include <stdio.h>

#define GRID_ROW        20
#define GRID_COLUMN     20

int grid [GRID_ROW][GRID_COLUMN] = {0x00};

int main ()
{
        int itr_row, itr_col = 0;

        FILE *grid_file = fopen("grid.txt", "r+");
        if (grid_file == NULL) {
                printf("Cannot open Grif File!\n");
                return -1;
        }

        //File Opened, read numbers now
        for (itr_row = 0; itr_row < GRID_ROW; itr_row++) {
                for (itr_col = 0; itr_col < GRID_COLUMN; itr_col++) {
                        fscanf(grid_file, "%d", &grid[itr_row][itr_col]);
                }
        }

        //Print the numbers
        for (itr_row = 0; itr_row < GRID_ROW; itr_row++) {
                for (itr_col = 0; itr_col < GRID_COLUMN; itr_col++) {
                        printf("%d-", grid[itr_row][itr_col]);
                }

                printf("\n");
        }

}
