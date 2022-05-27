#include <stdio.h>

int main(void){
    int i=0,num;
    printf("input number : ");
    scanf("%d",&num);
    while(i<num){
        printf("Hello World! \n");
        i++;
    }
    return 0;
}