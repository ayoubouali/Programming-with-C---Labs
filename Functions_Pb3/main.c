#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    int result;
    result=a+b;
    return result;
}
int difference(int a, int b)
{
    int result;
    result=a-b;
    return result;
}
int multiplication(int a, int b)
{
    int result;
    result=a*b;
    return result;
}
float division(float a, float b)
{
    float result;
    result=a/b;
    return result;
}

int main()
{
    int x,y;
    printf("Enter two integers:\n");
    scanf("%d%d",&x,&y);

    printf("the sum is: %d\n", sum(x,y));
    printf("the difference is: %d\n", difference(x,y));
    printf("the multiplication is: %d\n", multiplication(x,y));
    printf("the division is: %.2f\n", division(x,y));


    return 0;
}
