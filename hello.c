#include <stdio.h>
#include <unistd.h>

int main(void) {
int pid1;
printf("hello \n"); //( hello 1)
pid1 = fork();
if (pid1 != 0) {
wait(NULL);
printf("hello \n"); //( hello 2)
}
else {
printf("hello \n"); //( hello 3)
}
printf("hello \n"); //( hello 4)
return 0;
}
