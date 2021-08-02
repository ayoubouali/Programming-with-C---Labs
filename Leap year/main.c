#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    float L;
    printf("Enter the year\n");
    scanf("%d", &year);

    L=year%4;

    if (L==0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}
