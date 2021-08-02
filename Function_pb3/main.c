#include <stdio.h>
#include <stdlib.h>

int sum(int x,int y){
    return x+y;
}
int difference(int x,int y){
    return x-y;
}
int multiplication(int x,int y){
    return x*y;
}
float division(float x,float y){
    return x/y;
}

int main()
{
    int x,y;
    printf("Enter two integer numbers:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    printf("the sum is: %d\n", sum(x,y));
    printf("the difference is: %d\n", difference(x,y));
    printf("the multiplication is: %d\n", multiplication(x,y));
    printf("the division is: %.2f\n", division(x,y));
    return 0;
}
