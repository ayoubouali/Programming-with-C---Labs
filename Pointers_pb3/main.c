#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5]={57,15,63,22,18};
    int i,big=0;

    for(i=0;i<5;i++){
        if(big<*(array+i))
            big=*(array+i);
    }

    printf("The largest number is : %d\n", big);
    return 0;
}
