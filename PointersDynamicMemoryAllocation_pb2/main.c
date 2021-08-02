#include <stdio.h>
#include <stdlib.h>

int *searcheven(int array[],int n){
    int *p=0;
    int i,j=0;
    p=(int*)malloc(n*sizeof(int));

    for(i=0;i<10;i++){
        if(array[i]%2==0){
            p[j]=array[i];
            j++;
        }

    }


    return p;
}

int main()
{
    int array[10]={14,5,2,3,8,15,6,9,10,18};
    int i,n=0;
    for(i=0;i<10;i++){
        if(array[i]%2==0)
            n++;
    }

    int *even ;

    even=searcheven(array,n);
    printf("The number of even numbers is: %d\t and they are:\n",n);
    for(i=0;i<n;i++){
         printf("%d, ", even[i]);
    }

    free(even);

    return 0;
}
