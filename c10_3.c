#include <stdio.h>

int main(void){
    int num1, num2,tam,tag;
    printf("input numbers : ");
    scanf("%d %d",&num1,&num2);
    while(1){
        if(num2>num1){
            tag=num2;
            num2=num1;
            num1=tag;
        }
        if(num1%num2==0){
            printf("%d",num2);
            break;
        }
        num1=num1%num2;
    }
    return 0;
}