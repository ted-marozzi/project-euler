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

    unsigned long long int num = 600851475143, arr[10], product = 1;
    
    
    int j = 0, k, sol_found = 0;

    for(unsigned long long int i = 3; i<num; i = i + 2)
    {
        if(is_prime(i) == 1 && num%i == 0)
        {

            arr[j] = i;
            j = j + 1;
            printf("%llu\n", i);
            
            for(k=0;k<j;k++)
            {
                product = product*arr[k];
                if(product == num)
                {
                    printf("Largest prime factor: %llu", arr[k]);
                    sol_found = 1;
                }
            }
            product = 1;

        }

        if(sol_found == 1)
        {
            break;
        }

        

    }

    // Finishes here
    




    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;


}


int is_prime(unsigned long long int num) 
{
    if(num == 0 || num == 2)
    {
        return 0;
    }
    for(int i = 2; i<num; i=i+1)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}