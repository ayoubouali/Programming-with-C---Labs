#include <stdio.h>
#include <stdlib.h>

void Search(int array[5],int x){
    int i,p=0;
    for(i=0;i<5;i++){
        if(array[i]==x){
            p=i+1;}
    }
    if(p==0)
        printf("\nthis number does not belong to this array\n");
    else printf("\nthe key number is in position : %d\n",p);

}

int main()
{
    int array[5]={7,9,63,55,21}, a;
    printf("Enter the key number:\n");
    scanf("%d",&a);

    Search(array,a);

    return 0;
}
