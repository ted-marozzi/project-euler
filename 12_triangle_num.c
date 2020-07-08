//gcc -Wall -std=c99 template.c -o template -lm -g


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

    unsigned long long int tri_num = 1;
    int num_divisors = 0, j = 2;
    while(num_divisors <= 500)
    {
        num_divisors = 0;
        for(int i = 1; i*i <= tri_num; i++)
        {
            if(tri_num%i == 0)
            {
                num_divisors = num_divisors + 2;
            }
        }
        printf("Tri Nums: %llu, Divisors: %d\n", tri_num, num_divisors);
        
        tri_num = tri_num + j;
        j++;
        
    }

   
    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}