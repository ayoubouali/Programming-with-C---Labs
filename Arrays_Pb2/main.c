#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],n, i, p, temp;

    printf("Enter ten random numbers: \n");
    for(i=0; i<10; i++)
        scanf("%d", &T[i]);

    for(i=0; i<9; i++){
        p=i;
        for(n=i+1; n<10; n++){
            if(T[n]<T[p])
                p=n;
        }

        temp=T[i];
        T[i]=T[p];
        T[p]=temp;
    }

    printf("\nthe arrange numbers from the smallest to the largest: ");
    for(i=0; i<10; i++){
        printf("%d,", T[i]);
    }

    return 0;
}
