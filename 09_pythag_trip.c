//gcc -Wall -std=c99 template.c -o template -lm -g


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
    double total_time;
    clock_t start, end;
    start = clock();

    // Program starts here

    // Need a^2 + b^2 = c^2 AND a + b + c = 1000
    // Check smallest set first aka is checking 1 or 2 easier?
    // a = 1000 - b - c
    // (1000 - b - c)^2 + b^2 = c^2
    // c = (b^2 - 1000b + 500000)/(1000 - b)

    // b= 1
    // (1 - 1000 + 500000)/1000
    // 
    float b, c;
    for(b=1;b<1000;b++)
    {
        c = (pow(b,2) - 1000*b + 500000)/(1000 - b);
        if(c == (int)c)
        {

            int aa = (int)(1000 - b - c);
            int bb = (int)b;
            int cc = (int)c;
            if(aa<bb && bb<cc && aa>0 && bb>0 && cc>0)
            {
                unsigned long product = aa*bb*cc;
                printf("%lu", product);
            }
        }
    }

    // Finishes here

    end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	printf("\nTime taken is: %f", total_time);
    return 0;
}