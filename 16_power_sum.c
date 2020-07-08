//gcc -Wall -std=c99 template.c -o template -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

unsigned long long int ipow(int base, int exp);

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    unsigned long long int num;


    num = ipow(2,50);
    printf("Num is: %llu\n", num);
    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}

// What is the base times base operation

unsigned long long int ipow(int base, int exp)
{
    int i;
    unsigned long long int product = 1;
    if(base != (int)base && exp != (int)exp && base < 0 && exp < 1)
    {
        return -1;
    }
    for(i=1;i<=exp;i++)
    {
        product = product * base;
    }

    return product;
}