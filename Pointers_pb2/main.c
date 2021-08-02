#include <stdio.h>
#include <stdlib.h>

int main()
{
    float array[5]={2.35,78.54,12.0,15.2,9.63};
    int i;

    for(i=0;i<5;i++){
        printf("%.2f, ", *(array+1));
    }

    return 0;
}
