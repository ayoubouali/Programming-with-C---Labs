#include <stdio.h>
#include <stdlib.h>

int cube(int a){
    return a*a*a;
}

int main()
{
    int x;
    printf("Enter an integer number: \n");
    scanf("%d",&x);
    printf("\nThe cube of %d is: %d\n", x, cube(x));
    return 0;
}
