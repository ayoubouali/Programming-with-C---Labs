#include <stdio.h>
#include <stdlib.h>

void display(int x){
printf("%d\n", x);
}

int main()
{
    int array[5]={96,52,4,18,7},i;
    for(i=0;i<5;i++){
        display(array[i]);
    }
    return 0;
}
