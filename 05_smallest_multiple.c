//gcc -Wall -std=c99 05_smallest_multiple.c -o 05_smallest_multiple -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int divisible_by_nums(int num);



int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    int sol_found = 0, i = 1;
    while(sol_found == 0)
    {
        if(divisible_by_nums(i)==1)
        {
            sol_found = 1;
            printf("Num is: %d", i);
        }
        i++;
    }


    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}


int divisible_by_nums(int num)
{
    int i;
    for(i=1; i<=20; i++)
    {
        if(num%i != 0)
        {
            return 0;
        }
    }
    return 1;
}