//gcc -Wall -std=c99 08_largest_product.c -o 08_largest_product -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    int arr[50*20];

    for(int i = 0; i < 50*20; i++)
    {
        scanf("%1d", &arr[i]);

    }

    int j, i;
    unsigned long long int product = 1, max_product = 1;

    for(i = 0; i < 20*50; i++ )
    {
        for(j=0; j<13; j++)
        {
            product = product * arr[i+j];
            //printf("%d", arr[i+j]);

        }

        if(product > max_product)
        {
            max_product = product;
      
            printf("Max Product: %llu\n", max_product);


        }
        product = 1;
    }

 

    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}