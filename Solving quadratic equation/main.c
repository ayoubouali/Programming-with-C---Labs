#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c\n");
    scanf("%f %f %f", &a, &b, &c);
    d=b*b-4*a*c;
    if (d>=0)
    {
        r1= (-b-sqrt(d))/2*a;
        r2= (-b+sqrt(d))/2*a;
        printf("root1 = %f\nroot2 = %f\n", r1, r2);
    }
    else if (d<0)
    {
        printf("No real roots\n");
    }
    return 0;
}
