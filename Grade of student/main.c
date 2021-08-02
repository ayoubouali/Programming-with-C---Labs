#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C, Lab, E, Marks;
    printf("Enter the Control exam mark (out of 20)\n");
    scanf("%d", &C);
    printf("Enter the Lab mark (out of 20)\n");
    scanf("%d", &Lab);
    printf("Enter the Exam mark (out of 60)\n");
    scanf("%d", &E);
    Marks=C+Lab+E;

    if(Marks>=80)
        printf("Your grade is: A+");
    else if(Marks>=75 && Marks<=79)
        printf("Your grade is: A");
    else if(Marks>=70 && Marks<=74)
        printf("Your grade is: A-");
    else if(Marks>=65 && Marks<=69)
        printf("Your grade is: B+");
    else if(Marks>=60 && Marks<=64)
        printf("Your grade is: B");
    else if(Marks>=55 && Marks<=59)
        printf("Your grade is: C");
    else if(Marks>=50 && Marks<=54)
        printf("Your grade is: D");
    else if(Marks<50)
        printf("Your grade is: F");
    else;

    return 0;
}
