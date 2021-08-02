#include <stdio.h>
#include <stdlib.h>

void sum(int x,int y){
    printf("the sum is: %d\n", x+y);
}
void difference(int x,int y){
    printf("the difference is: %d\n", x-y);
}
void multiplication(int x,int y){
    printf("the multiplication is: %d\n", x*y);
}
void division(float x,float y){
    printf("the division is: %.2f\n", x/y);
}

int main()
{
    int x,y,z;
    printf("Enter two integer numbers :\n");
    scanf("%d%d",&x,&y);
    printf("\nEnter the operation number (Sum: 1\tDifference: 2\tMultiplication: 3\tDivision: 4):\n");
    scanf("%d",&z);

    switch(z)
    {
        case 1:     sum(x,y);
        break;
        case 2:     difference(x,y);
        break;
        case 3:     multiplication(x,y);
        break;
        case 4:     division(x,y);
        break;
    }

    return 0;
}
