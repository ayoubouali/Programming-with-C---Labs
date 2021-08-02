#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month, day, year;

    printf("Enter the month: ");
    scanf("%d", &month);
    printf("\nEnter the day in the month: ");
    scanf("%d", &day);
    printf("\nEnter the year: ");
    scanf("%d", &year);


    if(day==1 || day==21 || day==31){
        if(month==1)
            printf("\nThe date is : %dst January %d\n", day, year);
        if(month==2)
            printf("\nThe date is : %dst February %d\n", day, year);
        if(month==3)
            printf("\nThe date is : %dst March %d\n", day, year);
        if(month==4)
            printf("\nThe date is : %dst April %d\n", day, year);
        if(month==5)
            printf("\nThe date is : %dst May %d\n", day, year);
        if(month==6)
            printf("\nThe date is : %dst June %d\n", day, year);
        if(month==7)
            printf("\nThe date is : %dst July %d\n", day, year);
        if(month==8)
            printf("\nThe date is : %dst August %d\n", day, year);
        if(month==9)
            printf("\nThe date is : %dst September %d\n", day, year);
        if(month==10)
            printf("\nThe date is : %dst October %d\n", day, year);
        if(month==11)
            printf("\nThe date is : %dst November %d\n", day, year);
        if(month==12)
            printf("\nThe date is : %dst December %d\n", day, year);

    }

    if(day==2 || day==22){
        if(month==1)
            printf("\nThe date is : %dnd January %d\n", day, year);
        if(month==2)
            printf("\nThe date is : %dnd February %d\n", day, year);
        if(month==3)
            printf("\nThe date is : %dnd March %d\n", day, year);
        if(month==4)
            printf("\nThe date is : %dnd April %d\n", day, year);
        if(month==5)
            printf("\nThe date is : %dnd May %d\n", day, year);
        if(month==6)
            printf("\nThe date is : %dnd June %d\n", day, year);
        if(month==7)
            printf("\nThe date is : %dnd July %d\n", day, year);
        if(month==8)
            printf("\nThe date is : %dnd August %d\n", day, year);
        if(month==9)
            printf("\nThe date is : %dnd September %d\n", day, year);
        if(month==10)
            printf("\nThe date is : %dnd October %d\n", day, year);
        if(month==11)
            printf("\nThe date is : %dnd November %d\n", day, year);
        if(month==12)
            printf("\nThe date is : %dnd December %d\n", day, year);

    }

    if(day==3 || day==23){
        if(month==1)
            printf("\nThe date is : %drd January %d\n", day, year);
        if(month==2)
            printf("\nThe date is : %drd February %d\n", day, year);
        if(month==3)
            printf("\nThe date is : %drd March %d\n", day, year);
        if(month==4)
            printf("\nThe date is : %drd April %d\n", day, year);
        if(month==5)
            printf("\nThe date is : %drd May %d\n", day, year);
        if(month==6)
            printf("\nThe date is : %drd June %d\n", day, year);
        if(month==7)
            printf("\nThe date is : %drd July %d\n", day, year);
        if(month==8)
            printf("\nThe date is : %drd August %d\n", day, year);
        if(month==9)
            printf("\nThe date is : %drd September %d\n", day, year);
        if(month==10)
            printf("\nThe date is : %drd October %d\n", day, year);
        if(month==11)
            printf("\nThe date is : %drd November %d\n", day, year);
        if(month==12)
            printf("\nThe date is : %drd December %d\n", day, year);

    }


    else{

        if(month==1)
            printf("\nThe date is : %dth January %d\n", day, year);
        if(month==2)
            printf("\nThe date is : %dth February %d\n", day, year);
        if(month==3)
            printf("\nThe date is : %dth March %d\n", day, year);
        if(month==4)
            printf("\nThe date is : %dth April %d\n", day, year);
        if(month==5)
            printf("\nThe date is : %dth May %d\n", day, year);
        if(month==6)
            printf("\nThe date is : %dth June %d\n", day, year);
        if(month==7)
            printf("\nThe date is : %dth July %d\n", day, year);
        if(month==8)
            printf("\nThe date is : %dth August %d\n", day, year);
        if(month==9)
            printf("\nThe date is : %dth September %d\n", day, year);
        if(month==10)
            printf("\nThe date is : %dth October %d\n", day, year);
        if(month==11)
            printf("\nThe date is : %dth November %d\n", day, year);
        if(month==12)
            printf("\nThe date is : %dth December %d\n", day, year);
    }


    return 0;
}
