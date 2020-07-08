//gcc -Wall -std=c99 07_prime.c -o 07_prime -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int is_prime(int num);


int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();


    // Program starts here
    int num_primes = 0, i =2;
    while(num_primes <= 10001)
    {
        if(is_prime(i)==1)
        {
            
            num_primes++;

            if(num_primes == 10001)
            {
                printf("Num Primes: %d, Prime: %d\n", num_primes, i);
            }
            //
            

        }
    
        i++;
    }


    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}


int is_prime(int num)
{
    for(int i = 2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}