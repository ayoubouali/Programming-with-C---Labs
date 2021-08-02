#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float PI, sum=0, P;


    // n is the number of term for the series
    for(n=0; n<=10000 ;n++){

        P= pow((-1), n)/(2*n+1);

        sum+=P;
    }

    PI = 4*sum;

    printf("the Value of PI is : %f\n", PI);

    return 0;
}
