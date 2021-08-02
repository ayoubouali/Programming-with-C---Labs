#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codes[]={1548,1206,4050,6996,7401,6568,1665,1325,5196,1901};
    int i, pin;

    printf("Enter your PIN code: ");
    scanf("%d", &pin);
    for(i=0; i<10; i++){
        if(codes[i]==pin){
            printf("\nAuthenticated user\n");
            return 0;
        }
    }

    printf("\nPIN code wrong, try again: ");
    scanf("%d", &pin);
    for(i=0; i<10; i++){
        if(codes[i]==pin){
            printf("\nAuthenticated user\n");
            return 0;
        }
    }

    printf("\nPIN code wrong, try again: ");
    scanf("%d", &pin);
    for(i=0; i<10; i++){
        if(codes[i]==pin){
            printf("\nAuthenticated user\n");
            return 0;
        }
    }

    printf("\nNon-authenticated user\n");

    return 0;
}
