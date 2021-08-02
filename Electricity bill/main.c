#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Elec , bill;

    printf("Enter the total consumption in KWh per quarter\n");
    scanf("%f", &Elec);

    if (Elec<=125)
        printf("the bill: %f DA\n", bill=Elec*1.77);
    if (Elec>125 && Elec<=250)
        printf("the bill: %f DA\n", bill=125*1.77+(Elec-125)*4.17);
    if (Elec>250 && Elec<=1000)
        printf("the bill: %f DA\n", bill=125*1.77+125*4.17+(Elec-250)*4.81);
    if (Elec>1000)
        printf("the bill: %f DA\n", bill=125*1.77+125*4.17+750*4.81+(Elec-1000)*5.48);
    else;

    return 0;
}
