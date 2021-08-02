#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , temp, n=10;
    int list[n];

    printf("Enter 5 numbers:\n");
    for(i=0;i<n; i++)
        scanf("%d", &list[i]);

    printf("\n");
    printf("list before arragement: ");
    for(i=0;i<n;i++){
        printf("%d, ", list[i]);
    }
    printf("\n");

    for(i=0; i<(n/2); i++){
        temp=list[i];
        list[i]=list[n-i-1];
        list[n-i-1]=temp;
    }

    printf("list after arragement: ");
    for(i=0;i<n;i++){
        printf("%d, ", list[i]);
    }
    printf("\n");


    return 0;
}
