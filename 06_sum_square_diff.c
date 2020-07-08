//gcc -Wall -std=c99 06_sum_square_diff.c -o 06_sum_square_diff -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    int i, square_of_sum = 0, sum_of_square = 0;
    for(i = 1; i<=100; i++)
    {
        square_of_sum = square_of_sum + i;
        sum_of_square = sum_of_square + pow(i,2);
    }

    
    square_of_sum = square_of_sum*square_of_sum;
    

    printf("Diff between %d and %d is: %d", 
        square_of_sum, sum_of_square, square_of_sum-sum_of_square);
    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}