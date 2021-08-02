#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b)
{
    printf("the sum is: %d\n", a+b);
}
void difference(int a, int b)
{
    printf("the difference is: %d\n", a-b);
}
void multiplication(int a, int b)
{
    printf("the multiplication is: %d\n", a*b);
}
void division(float a, float b)
{
    printf("the division is: %.2f\n", (float)a/(float)b);
}

int main()
{
    int x,y,fun;
    printf("Enter two integers:\n");
    scanf("%d%d",&x,&y);
    printf("Enter the operation number  (1:Sum, 2:Difference, 3:Multiplication, 4:Division)\n");
    scanf("%d", &fun);

    switch(fun){
    case 1: sum(x,y);
    break;
    case 2: difference(x,y);
    break;
    case 3: multiplication(x,y);
    break;
    case 4: division(x,y);
    break;
    }



    return 0;
}
