//gcc -lm -g -Wall -std=c99 03_prime_factor.c -o 03_prime_factor


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime(unsigned long long int num);

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    unsigned long long int num, sum = 0;

    for(num = 2; num <= 2000000; num++)
    {
        if(is_prime(num) == 1)
        {
            sum = sum + num;

        }
    }

    printf("Sum is: %llu\n", sum);


    // Finishes here
    

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;


}


int is_prime(unsigned long long int num) 
{
    if(num <= 1)
    {
        return 0;
    }
    for(int i = 2; i*i<=num; i=i+1)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}