#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,c;
    
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(c=1; c<=i; c++)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}
