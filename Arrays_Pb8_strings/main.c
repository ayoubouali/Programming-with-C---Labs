#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[8][15]={"mango","banana","apple","orange","graphs","coconut","watermelon","papaya"};
    char temp[15];
    int i,j;

    for(i=0; i<8; i++){
       for(j=i+1; j<8; j++){
         if(str[j][0]<str[i][0]){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
       }
    }

    for(i=0 ; i<8; i++){
        printf("%s\n", str[i]);
    }



    return 0;
}
