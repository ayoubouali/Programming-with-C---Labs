#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[5], i, max=0, p, even=0, temp;

    printf("Enter 5 random positive numbers:\n");
    for(i=0; i<5; i++){
        scanf("%d", &T[i]);
    }

    for(i=0; i<5; i++){
        if(T[i]>max){
            max=T[i];
            p=i+1;
        }
    }
    printf("\nThe maximum value is %d in position %d\n", max, p);

    for(i=0; i<5; i++){
        if(T[i]%2==0)
            even++;
    }
    if(even==1)
        printf("\nThere is %d even element in T\n", even);
    else printf("\nThere are %d even elements in T\n", even);

    temp=T[0];
    for(i=0; i<5; i++)
        T[i]=T[i+1];
    T[4]=temp;

    printf("\nThe rotated T[] to the left by one element:  ");
    for(i=0; i<5; i++){
        printf("%d,",T[i]);
    }

    return 0;
}
