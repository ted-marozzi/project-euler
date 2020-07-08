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


    unsigned long long int num, seq_len = 1, max_seq = 0;

    for(unsigned long long int i = 1; i <= 10000000000; i++)
    {
        num = i;
        while(num > 1)
        {    
            if(num%2 == 0)
            {
                num = num/2;
            } 
            else 
            {
                num = 3*num + 1;
            }
            seq_len++;
        }
        if(seq_len > max_seq)
        {
            max_seq = seq_len;
            printf("Starting number: %llu, Length: %llu\n", i, max_seq);

        }
        
        seq_len = 0;
    }


    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}