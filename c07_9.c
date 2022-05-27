#include <stdio.h>

int main(void){
    int i=0,num,sum=0;
    while(i<5){
        num=-1;
        while(num<1){
            printf("input number : ");
            scanf("%d",&num);
            sum+=num;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}