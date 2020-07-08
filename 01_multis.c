//gcc -Wall -std=c99 template.c -o template -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here
    int i, sum = 0;
    for(i = 1; i<1000; i++)
    {
        if(i % 3 == 0 || i%5 == 0)
        {
            sum = sum + i;
            printf("%d\n", i);
        }
    }

    printf("%d", sum);
    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}