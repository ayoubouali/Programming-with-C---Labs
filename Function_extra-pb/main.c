#include <stdio.h>
#include <stdlib.h>

int sum(int r, int array[r][r]){
    int s=0,i,j;
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            s+=array[i][j];
        }
    }
    return s;
}

int main()
{
    int array[2][2]={{3,2},{6,4}};
    printf("\nthe sum of all the elements of the array is: %d\n", sum(2,array) );
    return 0;
}
