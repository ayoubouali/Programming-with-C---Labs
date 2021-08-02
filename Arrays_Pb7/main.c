#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[3][5]={{15.0,16.5,14,16,12.5},{11,13.5,17,10.5,18},{15,14.5,16,10,13.5}};
    float avg;
    int i,j,p=0;

    printf("|       || std 1 || std 2 || std 3 || std 4 || std 5 |\n");
    for(i=0; i<3; i++){
            if(i==0)
                printf("|  math |");
            if(i==1)
                printf("|physic |");
            if(i==2)
                printf("|english|");
        for(j=0; j<5; j++){
            printf("| %.2f |", grades[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0 ;i<5 ;i++){
        avg=(grades[0][i]+grades[1][i])/2;
        if(avg>=14 && grades[2][i]>=12){
            printf("student %d is addmited\n", i+1);
            p++;
        }

    }

    printf("\nthere are %d addmited students\n", p);



    return 0;
}
