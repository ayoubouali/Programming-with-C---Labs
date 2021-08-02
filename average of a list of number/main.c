#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=0, sum=0,x;
  float avg;

  printf("(Enter -1 to stop)\n");

  printf("\nEnter a number:");
  scanf("%d", &x);

  if(x!=-1){
        while(x!=-1){
    sum+=x;
    i++;
    printf("\nEnter a number:");
    scanf("%d", &x);

  }

  avg= (float)sum/i;

  printf("The average is: %f\n", avg);
  }

  else printf("the average is: 0\n");


    return 0;
}
