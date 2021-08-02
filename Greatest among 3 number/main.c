#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c)
        printf("the greatest number is: %d",a);
    if (b>=a && b>=c)
        printf("the greatest number is: %d",b);
    if (c>=a && c>=a)
        printf("the greatest number is: %d",c);
    return 0;
}
