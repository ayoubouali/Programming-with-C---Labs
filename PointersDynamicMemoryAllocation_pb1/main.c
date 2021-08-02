#include <stdio.h>
#include <stdlib.h>

int *create(int *x){
    int i;
    int *p=NULL;
    printf("Enter the size of your array: \n");
    scanf("%d",x);
    p=(int*)malloc(*x*sizeof(int));
    for(i=0;i<*x;i++){
        *(p+i)=0;
    }

    return p;
}

int main()
{
    int *T,n,i;

    T=create(&n);
    printf("The elements of array are : \n");
    for(i=0;i<n;i++){
        printf("%d \n", *(T+i));
    }
    return 0;
}
