#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        sum+=i;

    printf("sum is: %d\n", sum);


    return 0;
}
