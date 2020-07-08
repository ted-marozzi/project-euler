//gcc -Wall -std=c99 template.c -o template -lm -g

#define LIMIT (unsigned long)4000000

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    unsigned long int fib = 1, temp = 0, prev = 0, sum = 0;
 

    while(fib<LIMIT)
    {
        temp = fib;
        fib = temp + prev;
        prev = temp;
        

        if(fib%2 == 0 && fib<LIMIT)
        {
            sum = sum + fib;
        }
    }

    printf("%lu\n", sum);

    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}