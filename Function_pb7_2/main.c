#include <stdio.h>
#include <stdlib.h>

void sorting(int n, int array[]){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            }
        }
    }
}


int main()
{
    int i,n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int array[n];
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    sorting(n, array);

    printf("\nthe sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d, ", array[i]);
    }

    return 0;
}
