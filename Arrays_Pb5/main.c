#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char password[]="L02EE122", temp_password[10];
    char text1[]="the key to being a good programmer is to try and expose yourself to as much code as possible, even bad code can be good for you as long as you are not copying.";
    char text2[]="Acces denied!";

    printf("Enter the password: ");
    gets(temp_password);

    if(strcmp(password,temp_password)==0){
        puts(text1);
    }
    else
        puts(text2);

    return 0;
}
