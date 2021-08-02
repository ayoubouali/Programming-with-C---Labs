#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, c, rows;

    printf("Enter the number of rows (odd number from 1 to 19): ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i+=2){

        for(c=rows; c>i; c-=2){
            printf(" ");
        }

        for(n=0; n<i ; n++){
            printf("*");

        }
        printf("\n");
    }

    rows-=2;

    for(i=1; i<=rows; i+=2){

        for(c=0; c<i; c+=2){
            printf(" ");
        }

        for(n=rows; n>=i ; n--){
            printf("*");

        }
        printf("\n");
    }


    return 0;
}
