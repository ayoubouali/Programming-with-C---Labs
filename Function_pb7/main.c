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
    int i,array[5]={95,24,21,54,17};
    printf("the unsorted array is:\n");
    for(i=0;i<5;i++){
        printf("%d, ", array[i]);
    }

    sorting(5, array);

    printf("\nthe sorted array is:\n");
    for(i=0;i<5;i++){
        printf("%d, ", array[i]);
    }

    return 0;
}
