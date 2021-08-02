#include <stdio.h>
#include <stdlib.h>

int cube(int a)
{
    int result;
    result=a*a*a;

    return result;
}
int main()
{
    int n,result;
    printf("enter a number: ");
    scanf("%d", &n);

    result=cube(n);
    printf("\n%d\n", result);

    return 0;
}
