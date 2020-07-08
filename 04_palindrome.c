//gcc -lm -g -Wall -std=c99 04_palindrome.c -o 04_palindrome


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int is_palindrome(long int num);

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here
    long int i, j, num, largest_pal = 0;


    for(i=999;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            num = i*j;
            if(is_palindrome(num) == 1)
            {
                
                if(num > largest_pal)
                {
                    largest_pal = num;
                    
                }
            }

        }

    }

    printf("Largest Pal: %d\n", largest_pal);



    // Finishes here
    

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;


}


int is_palindrome(long int num)
{
    int num_arr[6], digits, i, j;
    digits = floor(log10(num)) + 1;
   
    for(i = 0; i<digits; i++)
    {
        num_arr[i] = num%10;
        num = num/10;
        
    }

    for(j = 0; j<digits/2; j++)
    {
        if(num_arr[j] != num_arr[digits-j-1])
        {
            return 0;
        }
    
    }


    return 1;
}