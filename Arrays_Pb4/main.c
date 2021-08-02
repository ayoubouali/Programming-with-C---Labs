#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[]="Computer programming is more like a Problem solving skill";
    char s2[]="It's a logical art of solving problems";
    char space[]=" " , vowels[]="AEIOUYaeiouy";
    int i,n,j=0,k=0;

    printf("s1=[%s]\ns2=[%s]\n",s1,s2);

    for(i=0; i<57; i++){
        if(s1[i]==space[0])
            j++;
    }
    for(i=0; i<38; i++){
            for(n=0;n<12;n++){
                if(s2[i]==vowels[n])
                    k++;
            }
    }
    printf("\nThe number of white spaces in s1[] is: %d\n",j);
    printf("The number of vowels in s2[] is: %d\n",k);

    printf("\n(function in string.h) length of s1[] is %d\tlength of s2[] is %d\n",strlen(s1),strlen(s2));

    for(i=0;s1[i]!='\0';i++);
    printf("(iterative statement)  length of s1[] is %d\t",i);
    for(i=0;s2[i]!='\0';i++);
    printf("length of s2[] is %d\n",i);

    printf("\nthe comparison of s1[] and s2[] is: %d\n", strcmp(s1,s2));

    char s3[38];

    strcpy(s3,s2); printf("\ns3=[%s]\n",s3);

    printf("the comparison of s2[] and s3[] is: %d\n", strcmp(s2,s3));

    s3[15]='A'; printf("\ns3=[%s]\n",s3);

    printf("the comparison of s2[] and s3[] is: %d\n", strcmp(s2,s3));

    strcat(s1,s2);

    printf("\n%s\n",s1);



    return 0;
}
